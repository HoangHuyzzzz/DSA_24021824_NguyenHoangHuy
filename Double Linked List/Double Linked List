#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev; 
    
    Node(int x) {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

// Thêm vào đầu - O(1)
Node* InsertHead(Node* head, int x) {
    Node* newNode = new Node(x);
    
    if (head == NULL) {
        return newNode;
    }
    
    newNode->next = head;
    head->prev = newNode; 
    
    return newNode; 
}

// Thêm vào cuối - O(1)
Node* InsertTail(Node* head, int x) {
    Node* newNode = new Node(x);
    if (head == NULL) {
        return newNode;
    }
    
    Node* curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    
    curr->next = newNode;
    newNode->prev = curr;
    
    return head;
}

// Thêm vào vị trí K
Node* InsertK(Node* head, int x, int k) {
    if (k == 0) {
        return InsertHead(head, x);
    }
    
    Node* curr = head;
    for (int i = 0; i < k - 1; i++) {
        curr = curr->next;
    }
if (curr == NULL) return head;

    Node* newNode = new Node(x);
    Node* p = curr->next; 
    
    newNode->next = p;
    newNode->prev = curr;
    curr->next = newNode;
    return head;
}

// Duyệt xuôi
Node* PrintList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        temp = temp->next;
    }
return head;
}

// Duyệt ngược:
Node* PrintReverse(Node* head) {
    if (head == NULL) {
        return head; 
    }
    
    Node* tail = head;
    
    while (tail->next != NULL) {
        tail = tail->next;
    }
    
    while (tail != NULL) {
        tail = tail->prev; 
    } 
    return head;
}
//  Xóa phần tử ở đầu
Node* DeleteHead(Node* head) {
    if (head == NULL) return NULL; 
    
    Node* p = head;
    head = head->next; 
    if (head != NULL) {
        head->prev = NULL; 
    }
    
    delete p; 
    return head;
}

//  Xóa phần tử ở cuối
Node* DeleteTail(Node* head) {
    if (head == NULL) return NULL; 
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
    
    Node* tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }
    tail->prev->next = NULL;
    
    delete tail; 
    return head;
}

//  Xóa phần tử ở vị trí K
Node* DeleteK(Node* head, int k) {
    if (head == NULL) return NULL;
    if (k == 0) {
        return DeleteHead(head);
    }
    
    Node* curr = head;
    for (int i = 0; i < k && curr != NULL; i++) {
        curr = curr->next;
    }
    
    if (curr == NULL) return head; 
    Node* p = curr->next;
    Node* m = curr->prev; 
    
    m->next = p; 
    
    if (p != NULL) {
        p->prev = m;
    }
    
    delete curr; 
    
    return head;
}
