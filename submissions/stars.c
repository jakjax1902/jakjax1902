#include <stdio.h>
int main(void) {
    // declaring the variables
    int numStars, i, j;

    scanf("%d", &numStars);
    
    for (i = 0; i < numStars; i++) {
        for (j = 0; j < numStars; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
