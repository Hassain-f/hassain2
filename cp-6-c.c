#include <stdio.h>


void swapByValue(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue function:\n");
    printf("a = %d, b = %d\n", a, b);  }


void swapByReference(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference function:\n");
    printf("a = %d, b = %d\n", *a, *b);
}

int main() {
    int x, y;


    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);


    printf("Before calling swapByValue:\n");
    printf("x = %d, y = %d\n", x, y);
    swapByValue(x, y);
    printf("After calling swapByValue:\n");
    printf("x = %d, y = %d\n\n", x, y);


    printf("Before calling swapByReference:\n");
    printf("x = %d, y = %d\n", x, y);
    swapByReference(&x, &y);
    printf("After calling swapByReference:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}


