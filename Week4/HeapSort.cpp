#include <iostream>
using namespace std;

// Hàm bơi lên
void swim(int *a, int k) {
    // Khi chưa lên tới đỉnh và cha nhỏ hơn con 
    while (k > 1 && a[k / 2] < a[k]) {
        swap(a[k / 2], a[k]); // Đổi chỗ cha với con
        k = k / 2;            // Cập nhật chỉ số
    }
}

// Hàm chìm xuống
void sink(int *a, int n, int k) {
    // Vẫn có con
    while (2 * k <= n) {
        int j = 2 * k; // j là index của con trái
        
        // Nếu con bên trái bé hơn con bên phải
        if (j < n && a[j] < a[j + 1]) {
            j++; // Chuyển sang con bên phải
        }
        
        
        if (a[k] >= a[j]) break;
        
        swap(a[k], a[j]); 
        k = j;            // Cập nhật chỉ số
    }
}

//  Hàm thêm phần tử 
void insert(int *a, int &n, int x) {
    a[++n] = x;  
    swim(a, n);  
}

// Hàm xóa và lấy đỉnh 
int delMax(int *a, int &n) {
    int max = a[1];     
    swap(a[1], a[n]);   
    n--;                
    sink(a, n, 1);      
    return max;         
}

