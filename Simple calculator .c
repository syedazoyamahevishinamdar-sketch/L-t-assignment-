#include <stdio.h>

// Function declaration (Prototype)
float calculateSimpleInterest(float principal, float rate, float time);

int main() {
    float p, r, t, interest;

    // 1. Accept input from the user
    printf("Enter Principal: ");
    scanf("%f", &p);

    printf("Enter Rate: ");
    scanf("%f", &r);

    printf("Enter Time: ");
    scanf("%f", &t);

    // 2. Use user-defined function to calculate interest
    interest = calculateSimpleInterest(p, r, t);

    // 3. Display the calculated interest clearly
    printf("\nSimple Interest = %.2f\n", interest);

    return 0;
}
