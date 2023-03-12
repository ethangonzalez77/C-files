/*challenge is to create a program that uses a 2d array in a weather program.

this program will find the total rainfall for each year, the average yearly rainfall, and the average rainfall for each month.

the key to this solution will be to visualize 2d array and understand how to iterate through one, via a nested loop.

outer loop iterate by year, inner loop iterate by month

*/

#include <stdio.h>
#include <stdbool.h>

//so we gunna define a couple of constants
#define MONTHS 12
#define  YEARS 5




int main () {
    //we gunna create a 2d array, and we want to initialize the data. we gunnamkae it float cuz rainfall data can be floating point numbers, WE CAN ACTUALLY MAKE THIS CONSTANT AN ARRAY BUT NOT GUNNA DO THAT  

    //initialize rainfall data for 2011-2015
    float rain [YEARS] [MONTHS] =  {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

    //now that we initialized our data, we can create our local variables.
    int year, month;//1.🧿control variables
    float subtot, total;//yearly and total

    //we need a loop thts gunna print out our rainfall for a particular year

    //  \t is an escape sequence for tab

    printf("\nYEAR\t\tRAINFALL (inches)\n");

    //inorder to calculate the subtotals for each year and display them, you want to go through all of the rows all of the years, and then for each year, you want to go through all the months because you need to add the months up.

    //1. so our outer loop is going to start off with the first year which is 2011, but its actually 0 inside the array because arrays are 0 index, and we gunna initialize 2 variables. remember for loops are very flexable you can actually creats othe variables in the for statement

    //2. then we gunna use year < YEARS which is realy just saying 0 < 5, and we gunna increment my counter looop control variable year. 2.🧿 so the year and the month variale are control varaibles. sonthis is gunna represent our outer loop and now gunna make inner loop because this is a 2d array.

    for (year = 0, total = 0; year < YEARS; year++) {

        for (month = 0, subtot = 0; month < MONTHS; month++) {
            //3. we are gunna determine our subtotals, we aint gunna display anything, so we gunn add to our subtotal for each year, our subtotal is my yearly total. and we are gunna access the array, our array name is rain.

            subtot += rain [year] [month];//all the data for this current year is gunna represent 2011 because of our outer loop and for each month. so its gunna go through the inner loop go through all the months for that year create a subtotal of that year, now we gunna display that subtotal of that year because we only wann display the subtoalt for 5 years
        }

        //4.so we guna add a print statement, the year and the subtotal

        printf("%5d \t%15.f1f\n", 2010 + year, subtot);
        total += subtot;//5. we then gunna add the subtotal to total because we need the total for all 5 years. notice to that the subtot is always being reinitialized everytime we go to the inner loop, so we dont have to set that back

        
    }

    //6. now that we can print out the rainfall for each year, we can now display the yearly average.

    //also, compiler errors is sometimes misrepresentative of what the actually error is.

    printf("\n The yearly average is %.1f inches. \n\n", total/YEARS);

    //7.now we have to have another loop thas going tp disply the monthly avreages. so before we do that we want to print everything out on a single line. so we just gunna print out some info using printf.

    printf("MONTHLY AVERAGES:\n\n");
    printf("JAN  FEB  MAR  APR  MAY  JUN  JUL  AUG  SEP  OCT  NOV  DEC\n");

    //8.now we need another loop to get the monthly averages. the outer loop is gunna start at month. instead of going by each row, what we guna do here is im going to go through each column because i need to get the monthly average. so we gunna start and we gunna go through each column because we need to get the monthly average, which is jan, feb, march represents columns, and for each column we gunna go through all the years for that column and then we can use the subtotal and the total again variables

    for (month = 0; month < MONTHS; month++ ) {

        for (year = 0, subtot = 0; year < YEARS; year++) {
            //go through all the years and then increment the year

            subtot += rain[year] [month];//9. so its important to understand here is that we swithced the way that we're iterating through the array. and the first looops we iterated by going through each row and looking at each column. in this one we're actually going through each column and looking at that specific row because we're calculating monthly averages. so we get the subtotal, and then we just want to print out our subtotal and then we wanna pirnt our subtotal divided by years for that month, so that it matches our output in line 74

        }

        //9. this will give us the monthly averages.

        printf("%4.1f ", subtot / YEARS);// so we get the subtotal, and then we just want to print out our subtotal and then we wanna pirnt our subtotal divided by years for that month, so that it matches our output in line 74

    }

    printf("\n");//idk what happened here, this wont do what its supposed to.



    return 0;
}