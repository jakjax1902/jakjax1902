#include <stdio.h>
int main(void) {
    // declaring the variables
    int popultationInfected = 1, day = 1, infected = 0;

    scanf("%d", &infected);
    
    while (popultationInfected < infected) {
        popultationInfected *= 3;
        day++;
    }

    printf("%d\n", day);

    return 0;
}
