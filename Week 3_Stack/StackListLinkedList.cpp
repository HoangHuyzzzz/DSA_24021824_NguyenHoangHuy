// Stack bằng List
#include <iostream>
using namespace std;

#define MAX 1000

struct StackList {
    int arr[MAX];
    int topIndex;

    void init() {
        topIndex = -1;
    }

    bool isEmpty() { return topIndex == -1; }
    bool isFull() { return topIndex == MAX - 1; }
    int size() { return topIndex + 1; }

// thêm đầu
    void push(int val) {
        if (isFull()) {
            cout << "Stack day!\n";
            return;
        }
        topIndex++;
        arr[topIndex] = val;
    }
// xóa đầu
    int pop() {
        if (isEmpty()) return -1;
        int v = arr[topIndex];
        topIndex--;
        return v;
    }

    int top() {
        if (isEmpty()) return -1;
        return arr[topIndex];
    }
};

// Stack bằng LinkedList

struct StackLinkedList {
    Node* head;
    int n;

    void init() {
        head = nullptr;
        n = 0;
    }

    bool isEmpty() { return head == nullptr; }
    int size() { return n; }

// Thêm đầu (đỉnh Stack)
    void push(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = head;
        head = newNode;
        n++;
    }

// Xóa đầu (xóa đỉnh Stack)
    int pop() {
        if (isEmpty()) return -1;
        Node* temp = head;
        int v = temp->data;
        head = head->next;
        delete temp;
        n--;
        return v;
    }

    int top() {
        if (isEmpty()) return -1;
        return head->data;
    }
};

