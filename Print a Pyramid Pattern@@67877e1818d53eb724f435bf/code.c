#include <stdio.h>
int main() {
    int n;
    int nst;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        for(int s=1; s<=n-1; s++){
            printf(" ");
        }
        for(int j =1; j<=nst+2; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}.