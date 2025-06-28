#include<stdio.h>

int main() {
    int *pA;
    int var = 10;

    printf("Address of var: %d\n", &var);
    printf("Value of var: %d\n", var);

    pA = &var; // pA now points to var.
    printf("Address of pointer: %d\n", pA);
    printf("Value of pointer: %d\n", *pA);

    var = 20; // change the value of var
    printf("Address of pointer: %d\n", pA); // Address remains the same
    printf("New value of pointer: %d\n", *pA); // 20

    *pA = 30; // means go change the value of var using pointer
    printf("Address of var: %d\n", &var); // Address remains the same
    printf("New value of var: %d\n", var); // 30
}