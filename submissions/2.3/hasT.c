#include <stdio.h>
int main(void) {
    char word[51];
    int l = 0, tIndex = -1;

    scanf("%s", word);

    while (word[l] != '\0') {
        if (word[l] == 't' || word[l] == 'T') {
            tIndex = l;
        }
        l++;
    }

    if (tIndex != -1) {
        if(tIndex > l/2) tIndex = 2;
        else tIndex = 1;
    }

    printf("%d\n", tIndex);

    return 0;
}
