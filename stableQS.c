#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int ar[], int low, int high) {
    int pivot = ar[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (ar[j] <= pivot) {
            i++;
            swap(&ar[i], &ar[j]);
        }
    }
    swap(&ar[i + 1], &ar[high]);
    return i + 1;
}

void stableQuickSort(int ar[], int low, int high) {
    if (low < high) {
        int pi = partition(ar, low, high);
        stableQuickSort(ar, low, pi - 1);
        stableQuickSort(ar, pi + 1, high);
    }
}

int main() {
    int ar[] = {10, 7, 8, 7, 1, 5};
    int n = sizeof(ar) / sizeof(ar[0]);

    stableQuickSort(ar, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");

    return 0;
}
