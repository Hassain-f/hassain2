#include <stdio.h>

int searchelement(int arr[],int size, int key){
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {12, 34, 7, 18, 25, 40, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, result;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    result=searchelement(arr,size,key);

    if (result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}



