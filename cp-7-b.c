#include <stdio.h>


int* getStaticVariable() {
    static int staticVar = 10;
    printf("Inside getStaticVariable: staticVar = %d\n", staticVar);
    staticVar += 5;
    return &staticVar;
}

int main() {
    int *ptr;


    ptr = getStaticVariable();
    printf("Value returned by pointer: %d\n", *ptr);

    ptr = getStaticVariable();
    printf("Updated value returned by pointer: %d\n", *ptr);

    return 0;
}

