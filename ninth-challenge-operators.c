#include <stdio.h>
#include <stdbool.h>

int main () {

    int a = 33;//doing a declaration and an assignment in a single statement.
    int b = 15;
    int result = 0;

    result = a + b;

    printf("result is: %d\n", result);
    printf("a is: %d\n", ++a);//with preincrementation
    printf("b is: %d\n", --b);

    //ex of logical operators: remember boolean expressions are just integers at the end of the day. Boolean variables are integers. So if the Boolean value is 1 then its true. 0 is false.

    _Bool c = true;
    _Bool d = 0;
    _Bool boolResult = c && d;
    _Bool boolResult2 = c || d;
    _Bool boolResult3 = !c;

    printf("boolResult %d\n", boolResult);
    printf("boolResult2 %d\n", boolResult2);
    printf("boolResult3 %d\n", boolResult3);

    //these logical operators are usually used in decision statements.



    return 0;
}