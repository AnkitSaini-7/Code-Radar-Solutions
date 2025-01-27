#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num1, num2, num3, average;
    printf("Enter num1, num2 and num3");
    scanf("%d%d%d", &num1, &num2, &num3);
    average = num1*num2*num3;
    printf("%d", average);
        return 0;
}