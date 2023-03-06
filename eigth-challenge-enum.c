#include <stdio.h>

//in this challenge, you are to create a C program the defines an enum type and uses that type to display the values of some variables. use printf() to display he value of the enum variables.

int main () {//remember enums are represented by intigers, so you'll get numbers when you print this stuff out. they are the integers of the order of the declarations in the list, like an array.

    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO = 10, EBAY, MICROSOFT};//company can only have these values. So any variable made from the "company datatype" will only accept these values. BASICALLY this datatype can only accept these values. you can also change the order of the values for ex: YAHOO = 10

    //now we gunna make some variables from the company dattype

    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    printf("the value of xerox is: %d\n", xerox);//remember enums are actual intigers under the hood.

    printf("the value of google is: %d\n", google);
    printf("the value of google is: %d\n", ebay);

    //the expected output is gunna be intigeers that are represented to the order of these values in the list.

    //enums are pretty cool, they can restrict what is valid for a variable, it provides some validation, also makes your code easier to read.

    return 0;
}