#include <iostream>
using namespace std;

struct Pair {
    int key;
    int val;
};

struct ArrayST {
    Pair arr[100]; 
    int count = 0;

    // Đưa dữ liệu vào hoặc cập nhật
    void put(int k, int v) {
        // Duyệt tìm key
        for (int i = 0; i < count; i++) {
            if (arr[i].key == k) {
                arr[i].val = v;
                return;
            }
        }
        // Nếu chưa có và mảng chưa đầy, thêm vào cuối
        if (count < 100) {
            arr[count].key = k;
            arr[count].val = v;
            count++;
        }
    }

    // Tra cứu dữ liệu
    int get(int k) {
        for (int i = 0; i < count; i++) {
            if (arr[i].key == k) {
                return arr[i].val;
            }
        }
        return -1;
    }
};
