#include <stdio.h>

int main () {//remember the main is the entry point to the program

    int grades [10];//array storing 10 values. also declaring an array type int size 10

/* if we didnt have the int grades [10]; we would have to make multiple variables like so:

    int gragdes1;
    int gragdes2;
    int gragdes3;

    its very noce that we can just create 1 variable and store 10 items.
    when you store items in a array, you dont want the values of the data to be different. for ex: having an array thats ment to store grades, bit then you store the age of people also. keep that shit separate.
*/



    int count = 10;//numberof values to be read
    long sum = 0;//sum of the numbers
    float average = 0.0f;//average of the numbers

    printf("\n Enter the 10 grades: \n");//prompt for input

    int i;//we are initializing it here before the loop instead of inside of the loop because the compiler could be below C89. if its C99 or above you can run it all in one line.

    //read the ten numbers to be averaged

/* Also, notice how we are using i = 0
this is important because the array index starts at 0. remeber the notes for java, this was also mentioned about how you can initialize the loop with any value, however its best practice to start at 0 because an array's index starts at 0.

*/

    for (i = 0; i < count; ++i) {

        printf("%2u> ", i + 1);//to show where your at with the numbers, like enter grade1, 2, etc.
        scanf("%d", &grades[i]);//read the grade, we also assigning data to that subscript.
        sum += grades[i];//add it to sum

       //this is really nice because we dont have to use 10 variables to do this stuff. we access the array using the subscript and can assign values to the array using subscript. remember that compilers cant detect out-of-bounds errors.

       //for ex: for (i = 0; i <= count; ++i) this will go up to 11 grades now and the compiler wont detect this error and everything will look good at the surface. However, the average wont workthe way it should because the array was set to store 10 items.

       //just remember that arrays are a fixed size of the grades, cant change the size its always gunna be 10 as you run the program, so if you assign any data above or past 10 its not gunna expand. Also, that the values have to be the same datatype in the aray.

    }

    //once we get out of the loop we gunna set out average equal to the sum divided by the count and cast. remember, sum divided by count, sum and long are different data types, so we wanna cast these two into a float.



    average = (float) sum / count;//average

    printf("\n Average of the ten grades entered is: %.2f\n", average);//print average

    /**********************************************************************************
    this print statemnt was'nt printing out the average, now it does because i got rid of the &

    before:
        printf("\n Average of the ten grades entered is: %.2f\n", &average);

    **********************************************************************************/





    return 0;
}