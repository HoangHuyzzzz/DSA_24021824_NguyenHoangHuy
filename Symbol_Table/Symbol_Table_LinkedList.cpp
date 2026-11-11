#include <iostream>
using namespace std;

struct Node {
    int key;
    int val;
    Node* next;
};

struct LinkedListST {
    Node* head = nullptr; 

    // Đưa dữ liệu vào hoặc cập nhật
    void put(int k, int v) {
        // Duyệt tìm xem key đã có chưa
        for (Node* x = head; x != nullptr; x = x->next) {
            if (x->key == k) {
                x->val = v; 
                return;
            }
        }
        // Nếu chưa có, tạo node mới và chèn vào đầu
        Node* newNode = new Node();
        newNode->key = k;
        newNode->val = v;
        newNode->next = head;
        head = newNode;
    }

    // Tra cứu dữ liệu
    int get(int k) {
        for (Node* x = head; x != nullptr; x = x->next) {
            if (x->key == k) {
                return x->val;
            }
        }
        return -1; 
    }
};
