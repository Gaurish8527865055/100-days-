#include <stdio.h>

int main() {
    float costPrice, sellingPrice;
    float profitOrLossAmount;
    float percentage;
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);
    if (costPrice <= 0) {
        printf("Error: Cost price must be greater than zero to calculate percentage.\n");
        return 1; 
    }
    profitOrLossAmount = sellingPrice - costPrice;
    if (profitOrLossAmount > 0) {
        percentage = (profitOrLossAmount / costPrice) * 100;
        printf("Profit: %.2f\n", profitOrLossAmount);
        printf("Profit Percentage: %.2f%%\n", percentage);
    } else if (profitOrLossAmount < 0) {
        percentage = (-profitOrLossAmount / costPrice) * 100; 
        printf("Loss: %.2f\n", -profitOrLossAmount);
        printf("Loss Percentage: %.2f%%\n", percentage);
    } else {
        printf("Neither profit nor loss.\n");
    }

    return 0; 
}