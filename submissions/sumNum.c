#include <stdio.h>
int main(void) {
    // declaring the variables
    int num, sum = 0;

    scanf("%d", &num);
    
    while (num != -1) {
        sum += num;
        scanf("%d", &num);
    }

    printf("%d\n", sum);

    return 0;
}
