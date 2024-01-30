#include <stdio.h>
int main(void) {
    // declaring the variables
	int age;
    int weightLuggage;

    // reading buffer
    scanf("%d", &age);
    scanf("%d", &weightLuggage);

    if (age == 60) {
        printf("0");
    } else if (age < 10) {
        printf("5");
    } else {
        if (weightLuggage > 20) {
            printf("40");
        } else {
            printf("30");
        }
    }

    return 0;
}
