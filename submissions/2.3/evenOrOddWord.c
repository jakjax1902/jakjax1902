#include <stdio.h>
int main(void) {
    int i = 0;
    char word[50];
    
    scanf("%s", word);

    while (word[i] != '\0') {
        i++;
    }

    printf("%d\n", (i%2!=0)+1);

    return 0;
}
