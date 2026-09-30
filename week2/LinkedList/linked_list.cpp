#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Thêm một Node vào đầu danh sách
// Độ phức tạp: O(1)
Node* InsertHead(Node* head, int x) {
    Node* a = new Node(x);  
    a->next = head;         
    head = a;               
    return head;
}

// Thêm một Node vào cuối danh sách
// Độ phức tạp: O(N)
Node* InsertTail(Node* head, int x) {
    if (head == NULL) {
        return new Node(x);
    }
    
    Node* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = new Node(x);
    return head;
}
// Thêm Node vào vị trí K
Node* InsertK(Node* head, int x, int k) {
    if (k == 0) {
        Node* newNode = new Node(x);
        newNode->next = head;
        return newNode;
    }
    
    Node* tmp = head;
    for (int i = 0; i < k - 1; i++) {
        tmp = tmp->next;
    }
        Node* newNode = new Node(x);
        newNode->next = tmp->next;
        tmp->next = newNode;
    return head;
}

// Xóa đầu
Node* deleteHead(Node* head) {
    if (head == nullptr) { 
        return nullptr;
    }
    Node* p = head;
    head = head->next;
    delete p; 
    return head; 
}

// Xóa cuối
Node* deleteLast(Node* head) {
    if (head == nullptr) return nullptr;
    
    // khi danh sách chỉ có 1 phần tử
    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }
    
    Node* p = head;
    while (p->next->next != nullptr) {
        p = p->next;
    }
    
    delete p->next;
    p->next = nullptr;
    return head;
}

// Xóa vị trí K
Node* DeleteK(Node* head, int k) {
    // Nếu danh sách rỗng
    if (head == nullptr) return nullptr;
    
    // Khi xóa phần tử đầu tiên
    if (k == 0) {
        Node* p = head;
        head = head->next;
        delete p;
        return head;
    }
    
    Node* curr = head;
    for (int i = 0; i < k - 1 && curr->next != nullptr; i++) {
        curr = curr->next;
    }
        Node* p = curr->next;
        curr->next = p->next; 
        delete p;
    return head;
}
// Duyệt xuôi danh sách
Node *traverse( Node*head) {
Node *curr = head;
while(curr != NULL)  {
curr =curr ->next;
}
return head;
}

// Duyệt ngược danh sách
Node* TraverseReverse(Node* tmp) {
    if (tmp == nullptr) {
        return nullptr; 
    }
    TraverseReverse(tmp->next);
    cout << tmp->data << " <- ";
    return tmp; 
}

