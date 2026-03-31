#include <stdio.h>

int main() {
    int id, original, reversed = 0, remainder;

    // Take input
    printf("Enter Employee ID: ");
    scanf("%d", &id);

    original = id;

    // Reverse the number
    while (id != 0) {
        remainder = id % 10;
        reversed = reversed * 10 + remainder;
        id = id / 10;
    }

    // Check palindrome
    if (original == reversed) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}
