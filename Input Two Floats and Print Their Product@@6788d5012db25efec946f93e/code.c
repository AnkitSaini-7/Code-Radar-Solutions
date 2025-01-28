#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float num1, num2, product;
    prinf("Enter num1 and num2\n");
    scanf("%f%f", &num1, &num2);
    /*prinf("Enter num1 and num2\n");*/
    product = num1*num2;
    printf("product %.2f",product);
    return 0;
}