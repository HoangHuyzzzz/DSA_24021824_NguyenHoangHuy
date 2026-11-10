void sort(int a[], int head, int tail) {
    if (head >= tail) {
        return;
    }
    
    int mid = (head + tail) / 2;
    sort(a, head, mid);
    sort(a, mid + 1, tail);
    merge(a, head, mid, tail);
}

void merge(int a[], int head, int mid, int tail) {
    int b[100];
    int c[100];

    // Sao chép nửa đầu vào mảng b
    for (int i = head; i <= mid; i++) {
        b[i] = a[i];
    }
    
    // Sao chép nửa sau vào mảng c
    for (int i = mid + 1; i <= tail; i++) {
        c[i] = a[i];
    }

    int i = head;
    int j = mid + 1;
    int k = head;
    
    // Trộn hai mảng b và c vào a
    while (i <= mid && j <= tail) {
        if (b[i] <= c[j]) {
            a[k] = b[i];
            i++;
        } else {
            a[k] = c[j];
            j++;
        }
        k++;
    }

    // Nếu mảng b còn phần tử, chép nốt vào a
    while (i <= mid) {
        a[k] = b[i];
        i++;
        k++;
    }
    
    // Nếu mảng c còn phần tử, chép nốt vào a
    while (j <= tail) { 
        a[k] = c[j];
        j++;
        k++;
    }
}
