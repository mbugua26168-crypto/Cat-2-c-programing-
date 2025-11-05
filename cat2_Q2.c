/*
Name: Mbugua Anka 
Reg.no:CT100/G/26168*25
Desciption: c program for cfile
*/
#include <stdio.h>

int main() {
    float hours, rate;
    float grossPay, tax, netPay;

    
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);

    printf("Enter hourly wage: ");
    scanf("%f", &rate);

    
    if (hours > 40) {
        grossPay = (40 * rate) + ((hours - 40) * rate * 1.5);
    } else {
        grossPay = hours * rate;
    }

    if (grossPay <= 600) {
        tax = grossPay * 0.15;
    } else {
        tax = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }

    netPay = grossPay - tax;

    
    printf("\nGross Pay = $%.2f", grossPay);
    printf("\nTax = $%.2f", tax);
    printf("\nNet Pay = $%.2f\n", netPay);

    return 0;
}