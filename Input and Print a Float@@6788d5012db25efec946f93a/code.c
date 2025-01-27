#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float a;
    printf("Enter your float");
    scanf("%f",&a);

    printf("%f", a);
    return 0;
}