#include <stdio.h>

//initializing all elments to the same value ex:

int main (void) {

    int array_values [10] = {0, 1, 4, 9, 16};//initailizing the first elements
    int i;

    for ( i = 5; i < 10; ++i) {//initaliize 5-9 to be i * i

        array_values[i] = i * i;

    }

    for ( i = 0; i < 10; ++i) {//going throught to entire array and displaying the data to show you that the last 5 values were initialized

        printf("array_values[%i] = %i \n", i, array_values[i]);

    }

    //so if you ever want to repeat the same value or initialize the same value, just use a loop. agian initialization is important, you wann initialize so make sure that this syntax is second nature for you because we'll be using arrays quite a bit in C
    
    return 0;
}