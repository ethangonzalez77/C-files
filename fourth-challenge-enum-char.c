#include <stdio.h>
#include <stdbool.h>

int main () {

    enum gender {male, female};//what this is saying is that we have a new datatype called gender, and it only accepts male and female.

    enum gender myGender;//this is declareing a variable

    myGender = male;//assigning a value

    enum gender herGender = female;

    // bool isMale = (myGender == herGender);

    // printf (isMale);


    char mychar = 'L';

    char mychar2 = 76; //represents L, with ASCII numbers

    char mychar3 = '\n';//escape charecter new line

    printf("%c", mychar2);
    

    return 0;

}