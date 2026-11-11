//Write a C program to simulate basic ATM transactions using two user-defined functions, withdraw()
//and deposit(). In the main() function, initialize the account balance and ask the user to select a
//transaction type(debit,credit) and enter the amount.
//1. The withdraw() function should receive a pointer to the account balance and the withdrawal
//amount. If the withdrawal amount is less than or equal to the available balance, deduct the
//amount and display a success message. Otherwise, display &quot;Transaction Declined:
//Insufficient Balance&quot;.
//2. The deposit() function should receive a pointer to the account balance and the deposit
//amount, add the amount to the account balance, and display the updated balance.
//3. Finally, display the final account balance after the transaction.


#include <stdio.h>

void withdraw(float *b, float a)
{
    if (a <= *b)
    {
        *b = *b - a;
        printf("Withdrawal successful\n");
    }
    else
    {
        printf("Transaction Declined: Insufficient Balance\n");
    }
}

void deposit(float *b, float a)
{
    *b = *b + a;
    printf("Deposit successful, updated balance: %.2f\n", *b);
}

int main()
{
    float b = 5000; 
    float a;    
    char t;         
    printf("Enter transaction type (d for debit, c for credit): ");
    scanf(" %c", &t);
    printf("Enter amount: ");
    scanf("%f", &a);
    if (t == 'd')
        withdraw(&b, a);
    else if (t == 'c')
        deposit(&b, a);
    else
        printf("Invalid transaction type\n");

    printf("Final account balance: %.2f\n", b);

    return 0;
}
