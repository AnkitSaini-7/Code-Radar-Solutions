#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100],str1[100];
    int b;
    printf("")
    scanf("%s %d %s", &str, &b, &str1);
    printf("Name: %s", str);
    printf("Age: %d", b);
    printf("Hobby: %s", str1);
    return 0;
}