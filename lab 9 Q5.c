// Q5 lab 09

#include <stdio.h>
void printSensorData(void *p, char t)
{
    if (t == 'f')
    {
        printf("Temperature: %.1f C\n", *(float *)p);
    }
    else if (t == 'i')
    {
        if (*(int *)p == 1)
            printf("Motion Detected\n");
        else
            printf("No Motion\n");
    }
    else if (t == 'c')
    {
        if (*(char *)p == 'O')
            printf("Door Open\n");
        else
            printf("Door Closed\n");
    }
    else
    {
        printf("Unknown sensor type\n");
    }
}

int main()
{
    float a = 27.5; 
    int b = 1;      
    char c = 'C';   
    printSensorData(&a, 'f');
    printSensorData(&b, 'i');
    printSensorData(&c, 'c');

    return 0;
}
