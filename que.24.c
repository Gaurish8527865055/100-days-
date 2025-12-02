#include <stdio.h>

int main() {
    int units;
    double bill_amount = 0.0;
    printf("Enter the number of units consumed: ");
    if (scanf("%d", &units) != 1 || units < 0) {
        printf("Invalid input. Please enter a non-negative integer for units.\n");
        return 1;
    }
    if (units <= 100) {
        bill_amount = units * 5.0; 
    } else if (units <= 200) {
        bill_amount = (100 * 5.0) + ((units - 100) * 7.0); 
    } else if (units <= 300) {
        bill_amount = (100 * 5.0) + (100 * 7.0) + ((units - 200) * 10.0); 
        bill_amount = (100 * 5.0) + (100 * 7.0) + (100 * 10.0) + ((units - 300) * 12.0); // Above at ₹12/unit
    }
    printf("Total electricity bill for %d units is ₹%.2f\n", units, bill_amount);
    return 0;
}
