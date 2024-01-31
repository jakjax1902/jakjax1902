#include <stdio.h>
int main(void) {
    int index, i;
    char name[101];
    char surname[101];

    scanf("%d", &index);

    for (i=0; i<index;i++) {
        scanf("%s %s", name, surname);
        printf("%s %s\n", surname, name);
    }

    return 0;
}
