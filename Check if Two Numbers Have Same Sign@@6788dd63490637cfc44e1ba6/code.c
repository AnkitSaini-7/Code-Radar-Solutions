#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a>1=&&b>=1){
        printf("Same Sign");
    }
    else if(a<=-1&&b<=-1){
        printf("Same Sign");
    }
    else{
        printf("Different Sign");
    }
    return 0;
}