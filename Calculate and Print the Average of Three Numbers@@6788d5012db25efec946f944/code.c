#include <stdio.h>
int main() {
    int num1, num2, num3, average;
    scanf("%d  %d %d", &num1, &num2, &num3);
    float q= (num1+num2+num3)/3.0;
    printf("Average: %.2f", q);
    return 0;
}