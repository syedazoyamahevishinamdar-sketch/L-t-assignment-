#include <stdio.h>

// Function prototypes
float calculateTotal(float marks[]);
float calculatePercentage(float total);

int main() {
    float marks[5];
    float total, percentage;

    // Input marks from user
    printf("Enter marks for 5 subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
    }

    // Function calls
    total = calculateTotal(marks);
    percentage = calculatePercentage(total);

    // Displaying output
    printf("\nTotal = %.0f", total);
    printf("\nPercentage = %.2f\n", percentage);

    return 0;
}

// Function to calculate total marks
float calculateTotal(float marks[]) {
    float sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += marks[i];
    }
    return sum;
}

// Function to calculate percentage
float calculatePercentage(float total) {
    // Percentage = (total / (number of subjects * max marks per subject)) * 100
    // Assuming max marks for each subject is 100
    return (total / 500) * 100;
}
