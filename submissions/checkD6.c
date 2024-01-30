#include <stdio.h>
int main(void) {
    // declaring the variables
	int rolls;
	int secondRoll;

	// reading buffer
    scanf("%d", &rolls); // get first roll
    scanf("%d", &secondRoll);

    rolls += secondRoll; // add second roll

    if (rolls > 9) {
        printf("Special tax\n36\n");
    } else {
        rolls *= 2;
        printf("Regular tax\n%d\n", rolls);
    }
    
    return 0;
}
