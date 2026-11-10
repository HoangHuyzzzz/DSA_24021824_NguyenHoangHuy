void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int partition(int a[], int head, int tail) {
    int pivot = a[head];
    int i = head + 1;
    int j = tail;
    
    while (i <= j) {
        while (i <= tail && a[i] <= pivot) {
            i++;
        }
        while (j >= head + 1 && a[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(a[i], a[j]);
        }
    }
    
    // Trường hợp j < i quá trình hoàn tất, đổi chỗ pivot với a[j]
    swap(a[head], a[j]);
    return j;
}

void Quick_sort(int a[], int head, int tail) {
    if (head < tail) {
        // pivot_index là chỉ số của pivot sau khi hoàn thành partition
        int pivot_index = partition(a, head, tail);
        Quick_sort(a, head, pivot_index - 1);
        Quick_sort(a, pivot_index + 1, tail);
    }
}
