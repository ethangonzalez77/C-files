#include <stdio.h>

int main () {

    unsigned long long sum = 0LL;
    unsigned int count = 0;

    printf("\n Enter he number of integers you want to sum: ");
    scanf("%u", &count);

    // unsigned int i;          something like this

    for (unsigned int i = 1; i <= count; ++i) {//incase you get an error for this loop its probaly the "unsigned int i = 1" saying you cant declare vars inside (), so just declare it outside. this is usually on C89. 

        printf("iniside loop |");
        sum += i;

    }

    printf("\n Total of the first %u numbers is %llu \n", count, sum);

    return 0;
}