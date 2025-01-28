#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;

    scanf("%ch", &a);
    printf("You entered: %ch\n", a);

    return 0;
}