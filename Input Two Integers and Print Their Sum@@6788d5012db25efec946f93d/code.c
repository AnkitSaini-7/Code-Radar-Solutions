#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int num1, num2, sum;
   printf("Eter num1\n");
   printf("Enter num2\n");
   scanf("%d%d\n", &num1, &num2);
   sum = num1 +num2;
   print("%d", sum);
    return 0;
}