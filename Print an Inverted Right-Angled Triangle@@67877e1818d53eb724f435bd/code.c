#include <stdio.h>
int main() {
    

    
    // Ask for the number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    // Outer loop for each row
    for (int i = 1; i <= n; i++) {
        // Inner loop to print the stars in each row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }
    
    return 0;
}
