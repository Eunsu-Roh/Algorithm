#include <stdio.h>

void Insertionsort(int A[], int n);

int main(void) {
    // 1~6이 출력되도록 초기값 설정 (4 포함)
    int A[6] = { 5, 2, 3, 6, 1, 4 };
    int n = 6; // 배열의 전체 크기

    Insertionsort(A, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}

void Insertionsort(int A[], int n) {
    // 두 번째 원소(인덱스 1)부터 시작
    for (int i = 1; i < n; i++) {
        int key = A[i];
        int j = i - 1;

        // j가 0 이상일 때까지 비교해야 A[0]까지 정상 정렬됨
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = key;
    }
}