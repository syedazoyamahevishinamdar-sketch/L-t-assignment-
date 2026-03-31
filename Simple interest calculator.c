#include <stdio.h>

float calculateSimpleInterest(float principal, float rate, float time);

int main() {
    float p, r, t;
    char choice;

    do {
        printf("\nEnter Principal: ");
        scanf("%f", &p);
        printf("Enter Rate: ");
        scanf("%f", &r);
        printf("Enter Time: ");
        scanf("%f", &t);

        printf("Simple Interest = %.2f\n", calculateSimpleInterest(p, r, t));

        // Ask the user if they want to continue
        printf("\nDo you want to calculate again? (y/n): ");
        scanf(" %c", &choice); // The space before %c clears the previous 'Enter' key

    } while (choice == 'y' || choice == 'Y');

    printf("Exiting program. Goodbye!\n");
    return 0; 
}

float calculateSimpleInterest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}
