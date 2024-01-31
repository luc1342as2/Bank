//Lucas Ghigli
//Bank Program
//01/10/2024

#include <stdio.h>
int main() {
 int accountNumber; //Account Number.
 float beginningMonthBalance; //Beginning of the month Balance.
 float totalCharges; //Monthly charges.
 float totalCredits; //Monthly credits used.
 float  allowedCreditLimit; //Credit limit amount.

 while (1) {
 printf("Enter account number: ");
 scanf("%d", &accountNumber);
 if (accountNumber == -1) {
    break;
                          }
 printf("Enter beginning balance: ");
 scanf("%f", &beginningMonthBalance);

 printf("Enter total charges: ");
 scanf("%f", &totalCharges);

 printf("Enter total credits: ");
 scanf("%f", &totalCredits);

 printf("Enter credit limit: ");
 scanf("%f", &allowedCreditLimit);

 float newBalance =  beginningMonthBalance + totalCharges - totalCredits;

 if (newBalance > allowedCreditLimit) {
     printf("\nAccount Number: %d\n", accountNumber);
     printf("\nCredit Limit: %f\n", allowedCreditLimit);
     printf("New Balance: %.2f\n", newBalance);
     printf("Credit Limit exceeded.\n");
             }
                           }
return 0;
           }
