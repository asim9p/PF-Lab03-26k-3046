#include <stdio.h>

int main() {
    float cgpa;
    float monthlyIncome;

    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);

    printf("Enter your family's monthly income in Rs.: ");
    scanf("%f", &monthlyIncome);

    if (cgpa > 3.7 && monthlyIncome < 50000) {
        printf("You qualify for a Full Scholarship.\n");
    } else if (cgpa > 3.3 && monthlyIncome < 100000) {
        printf("You qualify for a Half Scholarship.\n");
    } else {
        printf("You do not qualify for a scholarship.\n");
    }

    return 0;
}