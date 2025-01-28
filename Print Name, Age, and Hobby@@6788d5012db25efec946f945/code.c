#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[100],str1[100];
    int b;
    printf("Enter name and age");
    printf("Enter your hobby");
    scanf("%s %d", &str, &b);
    printf("Name: %s", str);
    printf("Age: %d", b);
    prinf("Hobby: %s", str1);
    return 0;
}