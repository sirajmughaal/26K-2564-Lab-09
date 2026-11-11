//Write a C program to process a digital image represented by a 3 × 3 integer matrix. Declare the
//matrix image[3][3] and a pointer to an array of three integers using int (*ptr)[3] = image;.
//Ask the user to enter values for all nine pixels. Using pointer arithmetic exclusively, access each pixel
//and multiply its value by 2 to increase the image brightness. Do not use standard array bracket
//notation to access or modify individual pixels. Finally, display the updated 3 × 3 image matrix using
//pointer arithmetic.

#include <stdio.h>

int main()
{
    int image[3][3];          
    int (*ptr)[3] = image;      
    int i;                      
    int j;                      

    printf("Enter 9 pixel values:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", *(ptr + i) + j);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            *(*(ptr + i) + j) = *(*(ptr + i) + j) * 2;
        }
    }

    printf("Updated image:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    return 0;
}



