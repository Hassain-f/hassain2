#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int **arr = (int **)malloc(n * sizeof(int *));
    for (i = 0; i < n; i++) {
        arr[i] = (int *)malloc(sizeof(int));
        printf("Enter value for element %d: ", i + 1);
        scanf("%d", arr[i]);
    }
    printf("\nThe elements of the array are:\n");
    for (i = 0; i < n; i++) {
        printf("Element %d: %d\n", i + 1, *arr[i]);
    }
    for (i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);
    return 0;
}

