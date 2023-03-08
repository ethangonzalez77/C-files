#include <stdio.h>
#include <stdlib.h>

#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .50
#define OVERTIME 40
#define Greet "yeehaa"

/* In this challenge your creating a C program that calculates your weekly pay.

    the program should ask the user to enter the number of hours worked in a week.

    the program should display as output the gross pay, the taxes and the net pay

    we are gunna be using a ton of constants in this program, mainly for our pay rate and our taxe rates.

    we are gunna use a define, its a preprocessor directive to create constants, and the way we know its a preprocessore directive is because we have a # symbol, NOTICICE that the data that you can assign can be floating points, integers, and even strings. You usually declare constants at the top of the program.

    its never a good idea to use magic numbers inside variables because now if anything changes, like the OVERTIME to 45, i only have to change it in one spot. If i had a magic number for my const i would have to constantly be changing the value in multiple places (something like that)

*/

int main () {

    int hours = 0;
    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;

    printf("Please enter the number of hours worked this week: \n");

    //get input
    scanf("%d", &hours);//you should always work and test in small chunks.

    //calculate the gross pay
    if (hours <= 40) {//if greater than 40 we want to have an overtime rate
        grossPay = hours * PAYRATE;
    }else {
        grossPay = 40 * PAYRATE;
        double overtimePay = (hours - 40) * (PAYRATE * 1.5);//multiply the payrate with the extra percentage to get the new payrate for the overtime.
        grossPay += overtimePay;
    }

    //printf("YOOOO: %.2f\n", grossPay);//very intresting, seems like it pulls this version of the variable.

    //calculate taxes
    if (grossPay <= 300) {//gunna calculate taxes depending how much money you make

        taxes = grossPay * TAXRATE_300;


    }else if (grossPay > 300 && grossPay <= 450) {

        taxes = 300 * TAXRATE_300;
        taxes += (grossPay - 300) * TAXRATE_150;


    }else if (grossPay > 450) {

        taxes = 300 * TAXRATE_300;
        taxes += 150 * TAXRATE_150;//wtf did 150 come from?
        taxes += (grossPay - 450) * TAXRATE_REST;


    }


    //calculate netpay
    netPay = grossPay - taxes;//

    //display output
    printf("Your gross pay this week is: %.2f\n", grossPay);
    printf("Your taxes this week is: %.2f\n", taxes);
    printf("Your net pay this week is: %.2f\n", netPay);
    






    return 0;
}