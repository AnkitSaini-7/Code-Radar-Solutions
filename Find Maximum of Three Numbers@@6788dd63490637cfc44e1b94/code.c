#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if(a>b>c){
        printf("%d", a);
    }
    else if(b>c>a){
        printf("%s", b);
    }
    else if(c>a>b){
        printf("%d", c);
    }
    else if(a>c>b){
        printf("%d", a);
    }
    else if(b>a>c){
        printf("d", a);
    }
    else {
        printf("%d", a)
    }
    return 0;
}