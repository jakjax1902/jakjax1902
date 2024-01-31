#include <stdio.h>
int main(void) {
    // declaring the variables
    int readTemperature, minSafeTemperature, maxSafeTemperature;

    scanf("%d %d", &minSafeTemperature, &maxSafeTemperature);
    scanf("%d", &readTemperature);
    
    while (readTemperature != -999) {
        if (readTemperature < minSafeTemperature || readTemperature > maxSafeTemperature) {
            printf("Alert!\n");
            readTemperature = -999;
        } else {
            printf("Nothing to report\n");
            scanf("%d", &readTemperature);
        }
    }

    return 0;
}
