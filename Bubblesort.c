#include <stdio.h>

void Bubblesort(int A[], int n);

int main(void) {
    int A[6] = {5, 2, 4, 6, 1, 3}; // 배열 선언 및 초기화
    int n = 6; // 배열 크기

    Bubblesort(A, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}

void Bubblesort(int A[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}