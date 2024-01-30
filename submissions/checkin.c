#include <stdio.h>
int main(void) {
    // declaring the variables
	int hoursPassed;

	// reading buffer
    scanf("%d", &hoursPassed);

    if (hoursPassed) {
        if (hoursPassed > 8) {
            printf("53\n");
        } else {
            hoursPassed = (hoursPassed * 5) + 10;
            printf("%d\n", hoursPassed);
        }
    } else {
        printf("10\n");
    }
	return 0;
}
