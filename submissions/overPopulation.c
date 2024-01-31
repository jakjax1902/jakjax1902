#include <stdio.h>
int main(void) {
    // declaring the variables
    int numCities;
    int citiesOverPopulated = 0;
    int cityPopulation;
    int i = 0;

    scanf("%d", &numCities);
    
    for (i = 0; i < numCities; i++) {
        scanf("%d", &cityPopulation);
        if (cityPopulation > 10000) {
            citiesOverPopulated++;
        }
    }

    printf("%d\n", citiesOverPopulated);

    return 0;
}
