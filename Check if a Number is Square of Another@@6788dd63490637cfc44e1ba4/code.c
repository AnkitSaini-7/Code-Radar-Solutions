#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a%b==0){
        printf("Yes");
    }
    else if(8%2==0){
        printf("No");
    }
    else{
        printf("No");
    }
      return 0;
}