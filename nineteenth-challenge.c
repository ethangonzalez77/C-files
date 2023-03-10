/* Purpose: This program prints the days of the month
date: 

*/

#include <stdio.h>
#include <stdlib.h>//idk if i even needed this

#define MONTHS 12
/**************************************************************************************

 careful when creating a CONST var, got rid of the ; and it started working.

 before:

    #define MONTHS 12;

**************************************************************************************/

int main () {

    int days [MONTHS] = {31, 28, 31, 30, 31, 30, 33, 31, 30, 31, 30, 31};
    int index;

    for ( index = 0; index < MONTHS; ++index) {

        printf("Month %d has %2d days. \n", index +1, days[index]);

        //index var is just a number, so thats how the program knows to print only the number and not the array's indexes/elements because its not talking to the array.

    }


    return 0;
}