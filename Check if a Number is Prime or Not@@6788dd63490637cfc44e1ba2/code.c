#include <stdio.h>

int main() {
    int num, i;
    int isPrime = 1;  // Assume the number is prime

    // Input a single integer
    scanf("%d", &num);

    // Check if the number is less than or equal to 1
    if (num <= 1) {
        isPrime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        // Check for factors from 2 to num/2
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) { // If num is divisible by i, it's not prime
                isPrime = 0;
                break;
            }
        }
    }

    // Output whether the number is prime or not
    if (isPrime) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}
