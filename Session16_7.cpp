#include <stdio.h>

// Nguyên mẫu hàm (prototype)
void sortArray(int *arr, int size);

int main() {
    int arr[] = {6, 4, 10, 1, 9}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    printf("Mang ban dau la: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    sortArray(arr, size);
    printf("Mang sau khi sap xep la: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
void sortArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) { 
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; 
            }
        }
    }
}


