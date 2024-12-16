#include <stdio.h>

int main() {
    int x = 26;     
    int *ptr = &x;   

    // In ra giá trị của x
    printf("Gia tri cua x: %d\n", x);      
    printf("Gia tri cua x (qua con tro): %d\n", *ptr); 

    // In ra địa chỉ của x
    printf("Dia chi cua x: %p\n", &x);      
    printf("Dia chi cua x (qua con tro): %p\n", ptr);  

    return 0;
}


