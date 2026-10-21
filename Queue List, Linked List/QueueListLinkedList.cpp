#include <iostream>
using namespace std;

#define MAX 1000

// Queue bằng List
struct QueueList {
    int arr[MAX];
    int frontIndex;
    int rearIndex;
    int count;

    void init() {
        frontIndex = 0;
        rearIndex = MAX - 1;
        count = 0;
    }

    bool isEmpty() { return count == 0; }
    bool isFull() { return count == MAX; }
    int size() { return count; }


    // THÊM Cuối (Insert Tail)
    void enqueue(int val) {
        if (isFull()) {
            cout << "Queue day!\n";
            return;
        }
        rearIndex = (rearIndex + 1) % MAX;
        arr[rearIndex] = val;
        count++;
    }


    //  XÓA ĐẦU (Delete Head)
    int dequeue() {
        if (isEmpty()) return -1;
        int v = arr[frontIndex];
        frontIndex = (frontIndex + 1) % MAX;
        count--;
        return v;
    }

    int front() {
        if (isEmpty()) return -1;
        return arr[frontIndex];
    }
};



struct Node {
    int data;
    Node* next;
};

struct QueueLinkedList {
    Node* head;
    Node* tail;
    int n;

    void init() {
        head = tail = nullptr;
        n = 0;
    }

    bool isEmpty() { return head == nullptr; }
    int size() { return n; }

  
    //  THÊM CUỐI (Insert Tail)
    void enqueue(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = nullptr;
        
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        n++;
    }



//  XÓA ĐẦU (Delete Head)
    int dequeue() {
        if (isEmpty()) return -1;
        Node* temp = head;
        int v = temp->data;
        head = head->next;
        if (head == nullptr) tail = nullptr;
        delete temp;
        n--;
        return v;
    }

    int front() {
        if (isEmpty()) return -1;
        return head->data;
    }
};

int main() {
    QueueLinkedList q;
    q.init();
    q.enqueue(10); 
    q.enqueue(20);
    cout << "Queue LinkedList Dequeue: " << q.dequeue() << "\n";
    return 0;
}
