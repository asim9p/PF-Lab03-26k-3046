#include <stdio.h>

int main() {
    int plan;
    int minutes;
    float bill;

    printf("Choose a plan (1-4): ");
    scanf("%d", &plan);

    switch (plan) {
        case 1:
            printf("Enter the number of minutes used: ");
            scanf("%d", &minutes);

            bill = 500;
            if (minutes > 1000) {
                bill += (minutes - 1000) * 2;
            }
            break;

        case 2:
            printf("Enter the number of minutes used: ");
            scanf("%d", &minutes);

            bill = 800;
            if (minutes > 2000) {
                bill += (minutes - 2000) * 2;
            }
            break;

        case 3:
            bill = 1200;
            break;

        case 4:
            printf("Enter the number of minutes used: ");
            scanf("%d", &minutes);

            bill = minutes;
            break;

        default:
            printf("Invalid plan choice. Please choose a plan from 1 to 4.\n");
            return 1;
    }

    printf("Your total bill is Rs. %.2f\n", bill);

    return 0;
}




