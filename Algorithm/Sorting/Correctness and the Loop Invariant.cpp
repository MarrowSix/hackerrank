/*
 *　题意：当前提供的insertSort()函数中有错误，你能够修正它吗？
 *　输入，输出与上一题相同
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void insertionSort(int N, int arr[]) {
    
    for(int i=1;i<N;i++) {
        int temp = arr[i];
        int j = i-1;
        
        while (j >= 0 && temp < arr[j]) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    
    for(int j=0;j<N;j++) {
        printf("%d",arr[j]);
        printf(" ");
    }
}
int main(void) {

    int N;
    scanf("%d", &N);
    int arr[N], i;
    for(i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    insertionSort(N, arr);

    return 0;
}
