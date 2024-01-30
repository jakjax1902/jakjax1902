#include <stdio.h>
int main(void) {
    // declaring the variables
	int numPassengers;
	float gasPrice;

	// reading buffer
    scanf("%d %f", &numPassengers, &gasPrice);

	// checking if there's more than 0 passengers
	if (numPassengers) {
		float result = (gasPrice + 1)/(numPassengers + 1);
		printf("%.2f\n", result);
	} else {
		printf("%.2f\n", gasPrice);
	}

	return 0;
}
