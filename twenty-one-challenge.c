#include <stdio.h>
#include <stdlib.h>//idk if i even needed this

//this time we are gunna use a designated initializers, we gunna specify the exact elements that we want to initialize.

#define MONTHS 12

int main (void) {

    int days [MONTHS] = {31, 28, [4] = 31, 30, 31, [1] = 29};//[1] = 29 is supposed to override this index, so you'll get an error
    int i;

    for ( i = 0; i < MONTHS; ++i) {

        printf("%2d %d \n", i +1, days[i]);

    }


    return 0;
}