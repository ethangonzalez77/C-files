/*  Author: Ethan
    Purpose: This is program is going to calculate the area of a rectangle
*/


#include <stdio.h>

int main () {

    /*Declaring variables*/

    // double width, height = 44;//this will only initailize the height variable

    double width = 32.3;
    double height = 15.3;

    //We dont know what the values are gunna be yet, so we are gunna initailize them to 0 for now. Its always a good habit to initailize all your variables

    double perimeter = 0.0;
    double area = 0.0;

    /*Performing perimeter calculations*/

    perimeter = 2.0 * (height + width);//we are assigning new data to our perimeter variable
    area = width * height;

    //if i want to display the values from a variable i have to use format specifiers. remember the first argument in printf() anything inside " " will be printed out. after the % we have to specifiy the datatype, and then the name of the variable. also remember to add a escape sequence, they are actions that tell the compilier to do something and they are represented by these wierd charecter sequences \n.


    /*Displaying output*/

    printf("Width is: %.2f, height is: %f, Perimeter is: %.2f\n", width, height, perimeter);//you can also use %.2f to trim off the fat
    printf("Area is: %f\n", area);






    return 0;
}