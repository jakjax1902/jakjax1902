#include <stdio.h>
int main(void) {
    int repeat, i;
    char word[101];

    scanf("%d %s", &repeat, word);

    for (i=0; i<repeat;i++) {
        printf("%s\n", word);
    }

    return 0;
}
