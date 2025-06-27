#include<stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p;
    p = arr; // p now points to the first element of arr
    printf("Address of arr: %d\n", p);
    int *ptwo;
    ptwo = &arr[0];
    printf("Address of arr[0]: %d\n", ptwo);
    return 0;
}