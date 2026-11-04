#include <iostream>
using namespace std;

// Hàm chìm xuống 
void sink(int *a, int n, int k) {
    while (2 * k <= n) {
        int j = 2 * k;
        if (j < n && a[j] < a[j+1]) {
            j++;
        }
        if (a[k] >= a[j]) break;
        
        swap(a[k], a[j]);
        k = j;
    }
}

// 2. Hàm Heapsort
void heapSort(int *a, int n) {
    // Xây dựng Max Heap từ mảng lộn xộn
  // Ta duyệt ở hàng trên của hàng cuối cùng
    for (int k = n / 2; k >= 1; k--) {
        sink(a, n, k);
    }
    
    int size = n; 
    while (size > 1) {
        swap(a[1], a[size]);
        size--;
        sink(a, size, 1);
    }
}
