#include <stdio.h>
int main() {
    char str1[100], str2[100];
    printf("Enter str1", str1);
    scanf("s", &str1);
    
    printf("Enter str2", str2);
    scanf("s", &str2);

    printf("You entered: ", str1);
    printf("You entered: ", str2);
    return 0;
}