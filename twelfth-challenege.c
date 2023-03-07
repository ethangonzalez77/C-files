#include <stdio.h>
#include <stdlib.h>
/* in this challenge your gunna create a C program tht displays the byte size of basic datatypes supported in C. the output varies depending on the system you are running on. int may be 4 or 8, its very important to know this, and if you start hard coding numbers its gunna cause problems in your program. So you wanna use the sizeof operator. Now you dont have to worry if your program is running on a certain system, its always gunna work the same.

you can use the %zd format specifier to format each size, shoud be supported in C99, this format specifier will help format ach size and print it out corerectly.

this challenge is to demonstrate how sizes vary from memory for different data types, again the key will be to test this n more than one computer to see the differences.

also random info: you cant have spaces as an argument in functions

*/

int main () {

    printf("Variables of type char occupy %u\n", sizeof(char));
     printf("Variables of type short occupy %u\n", sizeof(short));
      printf("Variables of type int occupy %u\n", sizeof(int));
       printf("Variables of type long occupy %u\n", sizeof(long));
        printf("Variables of type long long occupy %u\n", sizeof(long long));
         printf("Variables of type float occupy %u\n", sizeof(float));
          printf("Variables of type double occupy %u\n", sizeof(double));
           printf("Variables of type long double occupy %u\n", sizeof(long double));


// when you run this on different systems you'll see the bytes change


    return 0;
}