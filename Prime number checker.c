#include <stdio.h>

// Function prototype
int isPrime(int num);

int main() {
    int n;

    // Taking input from the user
    printf("Enter number: ");
    scanf("%d", &n);

    // Using the function to check and display the result
    if (isPrime(n)) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }

    return 0;
}

// User-defined function to check if a number is prime
int isPrime(int num) {
    // Prime numbers must be greater than 1
    if (num <= 1) {
        return 0; 
    }

    // Check divisibility from 2 up to num/2
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // Found a divisor, so it's not prime
        }
    }

    return 1; // No divisors found, it is prime
}
