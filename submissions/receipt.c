#include <stdio.h>
int main(void) {
    // declaring the variables
	int ingredient;
    int ingredients[10];
    int index;

    int i = 0;
    for (i = 0; i < 10; i++) {
        scanf("%d", &ingredient);
        ingredients[i] = ingredient;
    }
    scanf("%d", &index);

    printf("%d\n", ingredients[index]);

    return 0;
}
