#include <stdio.h>

int main () {

    enum Week {SUNDAY, MONDAY, TUESDAY, WENDSDAY, THURSDAY, FRIDAY, SATURDAY};

    enum Week today = MONDAY;

    switch (today)//usualy comparing var thats why it has to be constants, or an expression that evaluates to a specific constant value
    {
    case SUNDAY:
        printf("Today is SUNDAY yall\n");
        break;
    case MONDAY:
        printf("Today is MONDAY yall\n");
        break;
    case TUESDAY:
        printf("Today is TUESDAY yall\n");
        break;
    case WENDSDAY:
        printf("Today is WENDSDAY yall\n");
        break;
    case THURSDAY:
        printf("Today is THURSDAY yall\n");
        break;
    case FRIDAY:
        printf("Today is FRIDAY yall\n");
        break;
    case SATURDAY:
        printf("Today is SATURDAY yall\n");
        break;
    default:
        printf("What day is it???\n");
        break;
    }

    //another one

    float value1, value2;
    char operator;

    printf("Type in your expresion.\n");
    scanf("%f%c%f", &value1, &operator, &value2);

    switch (operator)
    {
    case '+' :
        printf("%.2f\n", value1 + value2);
        break;
    case '-' :
        printf("%.2f\n", value1 - value2);
        break;
    case '*' :
        printf("%.2f\n", value1 * value2);
        break;
    case '/' :
        printf("%.2f\n", value1 / value2);
        break;
    default:
        printf("No operator???\n");
        break;
    }


    return 0;
}