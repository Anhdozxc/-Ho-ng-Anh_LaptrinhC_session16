#include <stdio.h>

void printArray(int *arr, int size);

int main() {
    int arr[] = {2, 3, 5, 8, 9}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    printf("Cac phan tu trong mang:\n");
    printArray(arr, size);

    return 0;
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu %d: %d\n", i, *(arr + i)); 
    }
}

