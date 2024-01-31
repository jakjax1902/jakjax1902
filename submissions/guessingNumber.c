#include <stdio.h>
int main(void) {
    // declaring the variables
    int target, num, tries=1;

    scanf("%d", &target);
    scanf("%d", &num);
    
    while (num != target) {
        if (num < target) {
            printf("it is more\n");
        } else {
            printf("it is less\n");
        }
        tries++;
        scanf("%d", &num);
    }

    printf("Number of tries needed:\n%d\n", tries);

    return 0;
}
