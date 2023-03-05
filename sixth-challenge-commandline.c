#include <stdio.h>


//if we want to pass data to our program via the command line, we have to have parameters in our main. up until this point main has just been (empty)

//argc can be any name, but argc represents the argument counts

int main (int argc, char * argv[]) {

    //we gunna create some variables that demonstrat data being passed, and because data is being passed we need to store is somewhere.

    int numberOfArguments = argc;
    char * argument1 = argv[0];//this is setting argument 1 variable equal to the program name
    char * argument2 = argv[1];

    //often times when you demonstrate code examples, you want to print out the values of the variables, so these are printing out the value of the variables that are passed to main, which are command line arguments
    
    printf("numberOfArguments: %d\n", numberOfArguments);
    printf("argument1 is the program name: %s\n", argument1);
    printf("argument2 is the command line argument: %s\n", argument2);

    //it bassically gets data from the main function thats passed in and prints that data. when you execute this program your just clicking the play button and when your executing the program you can actually pass data to it. to pass data as a comand line argument to a program.

    //conclusion: this is what is displaying the command lines arguments, and the way you access them is through these parameters in the function, its useful for other programs and is associated with variables.


    return 0;
}