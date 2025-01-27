#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int a;
   printf("Enter your integer\n");
   scanf("%d", &a);
   print("You entered: %d", a);
   
    return 0;
}