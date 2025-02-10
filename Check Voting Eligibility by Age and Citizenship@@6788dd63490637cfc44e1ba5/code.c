#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
int a, b;
scanf("%d", &a);
scanf("%d", &b);
if(a>=18&&b!=0){
    printf("Eligible");
}
else{
    printf("Not Eligible");
}
    return 0;
}