#include <stdio.h>

int main() {
    int people;
    float totalWeight;

    printf("Enter the number of people: ");
    scanf("%d", &people);

    printf("Enter their combined weight in kg: ");
    scanf("%f", &totalWeight);

    if (people > 10 && totalWeight > 1000) {
        printf("Entry denied: the elevator exceeds both its people and weight limits.\n");
    } else if (people > 10) {
        printf("Entry denied: the elevator's people limit is exceeded.\n");
    } else if (totalWeight > 1000) {
        printf("Entry denied: the elevator is overweight.\n");
    } else {
        printf("The elevator can operate normally.\n");
    }

    return 0;
}