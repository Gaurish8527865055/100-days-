#include <stdio.h>
#include <math.h> 
int main() {
    float principal, rate, time;
    float simple_interest, compound_interest, amount;

    
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual interest rate (as a percentage, e.g., 5 for 5%%): ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

   
    simple_interest = (principal * rate * time) / 100;

    
    rate = rate / 100;
    amount = principal * pow((1 + rate), time);
    compound_interest = amount - principal;

   
    printf("\n--- Interest Calculations ---\n");
    printf("Principal Amount: %.2f\n", principal);
    printf("Annual Interest Rate: %.2f%%\n", rate * 100); 
    printf("Time Period: %.2f years\n", time);
    printf("Simple Interest: %.2f\n", simple_interest);
    printf("Compound Interest: %.2f\n", compound_interest);

    return 0;
}