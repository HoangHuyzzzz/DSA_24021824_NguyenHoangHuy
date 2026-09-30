#include <iostream>
using namespace std;

int a[100]; 
int n = 0; 

// Thêm vào đầu - O(N)
void ThemDau(int x) {
    for (int i = n; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = x;
    n++;
}

// Thêm vào cuối - O(1)
void ThemCuoi(int x) {
    a[n] = x;
    n++;
}
// Them vao vi tri K - O(N)
void ThemK(int x, int k) {
    if (k < 0 || k > n) return; 
    for (int i = n; i > k; i--) {
        a[i] = a[i - 1];
    }
    a[k] = x;
    n++;
}

// Xóa đầu - O(N)
void XoaDau() {
    if (n == 0) return;
    for (int i = 0; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
}

//  Xóa cuối - O(1)
void XoaCuoi() {
    if (n > 0) {
        n--; 
    }
}
// Xóa vị trí K - O(N)
void XoaK(int k) {
    if (k < 0 || k >= n) return;
    for (int i = k; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
}

//  Duyệt xuôi - O(N)
void DuyetXuoi() {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

//  Duyệt ngược - O(N)
void DuyetNguoc() {
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    cout << endl;
}

}
