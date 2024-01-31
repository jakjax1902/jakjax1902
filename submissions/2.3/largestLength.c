#include <stdio.h>
int main(void) {
    char word[101];
    int numWords, i, wordLength=0, largestWordLength=0;

    scanf("%d", &numWords);

    for (i=0;i<numWords;i++) {
        scanf("%s", word);
        
        // measuring word length
        wordLength = 0;
        while (word[wordLength] != '\0') {
            wordLength++;
        }

        if (i==0) {
            largestWordLength = wordLength;
        } else if(wordLength > largestWordLength) {
            largestWordLength = wordLength;
        }        
    }
    
    printf("%d\n", largestWordLength);
    return 0;
}
