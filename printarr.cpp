#include<stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p;
    p=arr;
    int i = 0;
    for (i=0;i<5;i++) {
        printf("arr [%d] address if %d\n",i,&arr[i]);
    }
    return 0;
}

// arr [0] address if 1869916912
// arr [1] address if 1869916916
// arr [2] address if 1869916920
// arr [3] address if 1869916924
// arr [4] address if 1869916928
// meaning each num takes 4 bytes, 1 byte = 8 bits