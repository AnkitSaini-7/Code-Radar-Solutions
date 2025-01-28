#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100],str1[100];
    int b;
    
    scanf("%s %d %s", &str, &b, &str1);
    printf("Name: %s\n", str);
    printf("Age: %d\n", b);
    printf("Hobby: %s\n", str1);
    return 0;
}