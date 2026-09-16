#include <stdio.h>

void Selectionsort(int A[], int n);

int main(void) {
    // 1~6이 출력되도록 초기값 설정 (4 포함)
    int A[6] = { 5, 2, 3, 6, 1, 4 };
    int n = 6; // 배열의 전체 크기

    Selectionsort(A, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}

void Selectionsort(int A[], int n){
    
    for (int i = 0; i < n-1; i++) {
        int min = i;
        
        for(int j =i+1; j<n; j++){
            if(A[j]<A[min]){
                min = j;
            }
        }
        int temp = A[i];
        A[i] = A[min];
        A[min] = temp;
    }
}