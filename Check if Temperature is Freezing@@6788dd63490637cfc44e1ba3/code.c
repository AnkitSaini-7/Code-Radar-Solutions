#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%d", a);
    if(a>0){
        printf("Above Freezing");
    }
    else if(a<=0){
        printf("Freezing");
    }
    return 0;
}