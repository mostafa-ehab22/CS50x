#include <stdio.h>

const int size = 5;

int main(void)
{
    // Declare array
    int numbers[size];
    numbers[0] = 1;

    // Populate array => Numbers double as we go
    for(int i = 1; i < size; i++)
    {
        numbers[i] = numbers[i - 1] * 2;
    }

    // Print out one by one
    for(int i = 0; i < size; i++)
    {
        printf("Number is %i\n", numbers[i]);
    }
}