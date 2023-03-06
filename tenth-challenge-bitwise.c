#include <stdio.h>

int main () {

    unsigned int a = 60;// 0011 1100
    unsigned int b = 13;// 0000 1101

    //when you set these binary numbers up you can turn off the bits by using the different bitwise operands

    int result = 0;

    result = a & b;//if a = 1, and b = 1 the bit is gunna turn on

    //the first bit of a and b is 0 so the result is: 0000 1100
    //they both have to be true in order to be 1


    printf("result is : %d\n", result);//will print in decimal format should be 12


    int result2 = a | b;//0011 1101

    printf("result2 is : %d\n", result2);//should be 61

    //this stuff is more on the advance side, its a nice way to represent a lot of data by using & and so forth by turning on and turning off bits.

    //an unsigned int menas that it can only mean positive ints, it cant be negative, so if you store a negative value in there, the compilier will convert it and take up a lot of size, (somehting like, that idk what he was saying)

    //signed ints can be both positive and negative


    return 0;
}