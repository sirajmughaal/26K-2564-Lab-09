//Write a C program using two user-defined functions, calculateDiscount() and calculateFinalBill(), to
//calculate the final payable amount based on the customers membership type and shopping cart
//value.
//1. The program should calculate the membership discount as follows: Platinum (P) customers
//receive a 20% discount, Gold (G) customers receive a 10% discount, and Standard (S)
//customers receive a 5% discount. If the total shopping amount exceeds PKR 10,000, an
//additional 2% discount is added to the applicable discount rate.
//2. The calculateDiscount() function should return the discount amount in PKR. The program
//should subtract this discount from the original shopping amount to obtain the discounted
//amount.
//3. The calculateFinalBill() function should apply 15% sales tax to the discounted amount. It
//should also add a flat shipping charge of PKR 300 if the discounted amount is PKR 5,000 or
//less. If the discounted amount exceeds PKR 5,000, shipping should be free. Finally, the
//function should return the total payable amount, including tax and shipping.



#include <stdio.h>

float calculateDiscount(float a, char t)
{
    float r = 0; 

    if (t == 'P')
        r = 20;
    else if (t == 'G')
        r = 10;
    else if (t == 'S')
        r = 5;

    if (a > 10000)
        r = r + 2;

    return a * r / 100;
}

float calculateFinalBill(float d)
{
    float tax = d * 15 / 100; 
    float s = 0;             

    if (d <= 5000)
        s = 300;

    return d + tax + s;
}

int main()
{
    float a;  
    char t;   
    float d;   
    float f;  
    float b;   

    printf("Enter shopping amount (PKR): ");
    scanf("%f", &a);
    printf("Enter membership type (P, G or S): ");
    scanf(" %c", &t);

    d = calculateDiscount(a, t);
    f = a - d;
    b = calculateFinalBill(f);

    printf("Discount amount: %.2f\n", d);
    printf("Discounted amount: %.2f\n", f);
    printf("Final payable amount: %.2f\n", b);

    return 0;
}
