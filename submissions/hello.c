#include <stdio.h>
int main(void) {
    // declaring the variables
	int heightTree;
    int numLeaflets;

    // reading buffer
    scanf("%d", &heightTree);
    scanf("%d", &numLeaflets);

    if ((heightTree <= 5) && (numLeaflets >= 8)) {
        printf("Tinuviel\n");
    } else if((heightTree >= 10) && (numLeaflets >= 10)) {
        printf("Calaelen\n");
    } else if((heightTree <= 8) && (numLeaflets <= 5)) {
        printf("Falarion\n");
    } else if((heightTree >= 12) && (numLeaflets >= 7)) {
        printf("Dorthonion\n");
    } else {
        printf("Uncertain\n");
    }

    return 0;
}
