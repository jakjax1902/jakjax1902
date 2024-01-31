#include <stdio.h>
int main(void) {
    // declaring the variables
    int index;
    double totalPrice = 0;
    double weightIngredients[10], priceIngredients[10];
    double pound, price;
    int i = 0;

    scanf("%d", &index);
    
    // storing the price per pound of each ingredient
    for (i = 0; i < index; i++) {
        scanf("%lf", &price);
        priceIngredients[i] = price;
    }

    // storing the weight needed of each ingredient
    for (i = 0; i < index; i++) {
        scanf("%lf", &pound);
        weightIngredients[i] = pound;
    }

    // calculating the total price for the meal
    for (i = 0; i < index; i++) {
        totalPrice += weightIngredients[i] * priceIngredients[i];
    }

    printf("%lf\n", totalPrice);

    return 0;
}
