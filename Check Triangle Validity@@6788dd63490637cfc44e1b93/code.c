#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {    
    int a, b ,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if((a+b)>c){
    printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}