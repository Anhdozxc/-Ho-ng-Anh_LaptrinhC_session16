#include <stdio.h>

void updateElement(int *arr, int position, int newValue) {
    arr[position] = newValue; 
}
int main() {
    int arr[] = {1, 4, 12, 26, 34}; 

    printf("Mang ban dau: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    updateElement(arr, 2, 16); 
    printf("Mang sau khi cap nhat: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


