#include <stdio.h>
#include <stdbool.h>


int main () {

    int integerVar = 100;
    float floatVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';

    _Bool boolVar = 0;
    bool boolVar2 = true;

    printf("integerVar = %i\n", integerVar);
    printf("floatVar = %f\n", floatVar);//will print slightly diffferent because of the %f and depending on the machine your on because its machine independent it may display differently 
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);//same as before but displayed differently
    printf("charVar = %c\n", charVar);
    printf("boolVar = %i\n", boolVar);
    printf("boolVar2 = %i\n", boolVar2);//first argument is what is going to be printed out, the second argument is going to be mapped to whats the format specifier(%i), \n is just a new line because its an "escape sequence". the % gets mapped to whatever the the value of boolVar2 is



    //width specifier: a number after the % that specifies the min field width to be printed if the charecters are less than the size of the width that remains in the space. it really has more to deal with precision.

    float x = 3.99923232323;//we can print the width of this be specifying how far or precise the number is



    printf("%.2f\n", x);//will only print 3.99 because the .2 specifies the width of the floating point number, however this will print 4.00 because it rounds it.

    printf("Again = %.5f", x);//this will print it with 3.99923

    return 0;
}