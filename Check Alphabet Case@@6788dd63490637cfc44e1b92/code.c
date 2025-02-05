#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a, A, Z;
    scanf("%c", &a);
    if(a >=A && a<= Z){
    printf("Uppercase");
    }
    else if(a>=0 || a<=0){
        printf("Not an aplhabet");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}