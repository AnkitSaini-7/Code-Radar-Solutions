#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num1, num2, product;
    printf("Enter num1 and num2\n");
    scanf("%d%d", &num1, &num2);
    product = num1*num2;
    printf("Product %product",product);
    return 0;
}