#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float num1, num2, product;
    printf("Enter num1 and num2\n");
    scanf("%f%f", &num1, &num2);
    product = num1*num2;
    printf("Product %f",product);
    return 0;
}