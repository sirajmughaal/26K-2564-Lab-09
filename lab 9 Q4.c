//Write a C program that demonstrates the use of function pointers to perform different operations
//on two integers. Define three user-defined functions: add() to calculate the sum, multiply() to
//calculate the product, and findMax() to return the larger of the two integers.
//1. Create a master function named compute() that accepts two integers and a function pointer
//as parameters. It should execute the operation specified by the function pointer and return
//the result.
//2. In the main() function, prompt the user to enter two integers. Call compute() three times,
//passing add, multiply, and findMax directly as arguments. Finally, display the sum, product,
//and maximum value returned by the respective function calls.
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

int findMax(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int compute(int a, int b, int (*f)(int, int))
{
    return f(a, b);
}

int main()
{
    int a; 
    int b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Sum: %d\n", compute(a, b, add));
    printf("Product: %d\n", compute(a, b, multiply));
    printf("Maximum: %d\n", compute(a, b, findMax));

    return 0;
}
