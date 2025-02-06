#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int a, b;
   scanf("%d", &a);
   scanf("%d", &b);
   if(a>b){
    printf("Loss");
   }
   else if(b>a){
    printf("Profit");
   }
   else if(a ==b){
    printf("NO Profit NO Loss");
   }
    return 0;
}