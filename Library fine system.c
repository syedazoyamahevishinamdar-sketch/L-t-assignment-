#include <stdio.h>

// Function prototype
int calculateFine(int days);

int main() {
    int days, fine;

    // Input: Taking number of late days from user
    printf("Enter number of late days: ");
    scanf("%d", &days);

    // Calling the user-defined function
    fine = calculateFine(days);

    // Output: Displaying the result based on the calculated fine
    if (fine > 0) {
        printf("Total Fine = %d\n", fine);
    } else {
        printf("No Fine\n");
    }

    return 0;
}

// Function definition to calculate fine
int calculateFine(int days) {
    if (days > 5) {
        // Applying the rule: ₹2 per day if days > 5
        return days * 2;
    } else {
        // No fine if days are 5 or less
        return 0;
    }
}
