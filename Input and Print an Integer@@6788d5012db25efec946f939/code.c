#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int a;
   printf("Enter your integer\n");
   scanf("%d", &a);
   printf("You entered: %d", a);

    return 0;
}