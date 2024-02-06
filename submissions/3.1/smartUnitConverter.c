#include <stdio.h>
void toFt(double);
void toPounds(double);
void toFahr(double);

int main() {
    int iterations = 0, i;
    double number;
    char unit;
    
    scanf("%d", &iterations);
    
    for(i=0;i<iterations;i++) {
        
        scanf("%lf %c", &number, &unit);
        
        if (unit == 'm') {
            toFt(number);
        } else if (unit == 'g') {
            toPounds(number);
        } else if (unit == 'c') {
            toFahr(number);
        }
    }

    return 0;
}

void toFt(double x) {
    double result = x*3.2808;
    printf("%.6lf ft\n", result);
}

void toFahr(double x) {
    double result = (x*1.8) + 32;
    printf("%.6lf f\n", result);
}

void toPounds(double x) {
    double result = x*0.002205;
    printf("%.6lf lbs\n", result); 
}