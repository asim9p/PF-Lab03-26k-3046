#include <stdio.h>

int main() {
    int zone;
    int speed;
    int speedLimit;
    int fine = 0;

    printf("Enter zone type (1 = School, 2 = Highway, 3 = Residential): ");
    scanf("%d", &zone);

    printf("Enter the driver's speed in km/h: ");
    scanf("%d", &speed);

    switch (zone) {
        case 1:
            speedLimit = 30;
            break;
        case 2:
            speedLimit = 100;
            break;
        case 3:
            speedLimit = 50;
            break;
        default:
            printf("Invalid zone type.\n");
            return 1;
    }

    if (speed > speedLimit) {
        fine = 1000;

        if (speed - speedLimit > 20) {
            fine *= 2;
        }

        printf("Final fine: Rs. %d\n", fine);
    } else {
        printf("No violation. No fine.\n");
    }

    return 0;
}