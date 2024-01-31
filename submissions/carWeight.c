#include <stdio.h>
int main(void) {
    // declaring the variables
    int index;
    double totalWeight = 0;
    double cars[50];
    double weightCar;

    scanf("%d", &index);
    
    int i = 0;
    for (i = 0; i < index; i++) {
        scanf("%lf", &weightCar);
        cars[i] = weightCar;
        totalWeight += weightCar;
    }

    totalWeight = totalWeight/index;

    int j = 0;
    for (j = 0; j < index; j++) {
        cars[j] = totalWeight - cars[j];
        printf("%.1lf\n", cars[j]);
    }

    return 0;
}
