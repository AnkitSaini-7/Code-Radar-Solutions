#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d",a);
    printf("%d",b);
    if(a==b){
        printf("False");
    }
    else{
        printf("True");
    }
    return 0;
}