#include <stdio.h>

int main () {

    char str[100]; //string array of 100

    int i;

    printf("Enter a value: ");

    scanf("%d %s", &i, str); // %d is an int, and we are gunna store that data in var i, and we have to use the & because of the pointers, you dont have to know why, its just the address. the user is gunna enter data and when pressed enter its gunna be stored in the var i.

    printf("\n You entered: %d:::::%s\n", i, str);

    return 0;
}
















/*
    We now know that the #include is a Preprocessor Directive because of the pound symbol.

    Anything that starts with the # with no spaces is a preprocessor command, a preprocessor directive.

    So what is it doing, what does it mean?

    again this is a basic concept in C that we need to learn about early on because every C program has it, you'll see this in all of your C programs.

    the #include statement is a preprocessor directive because of the # and we call it a statement as opposed to a directive for no real reason because it's common to use that term in programming, but it is a directive techniclly.

    We use <stdio.h> its not strictly part of the executable program, however the program won't work without it. We know its a Preprocessor Directive it doesn't do much as far as how the program works, it's just telling the compiler before it runs, hey we're doing something here with this include. And if you don't have it the compiler is going to shit itself and throw errors. So you need it.

    The # indicates this is a preprocessing directive
        -which is an instruction to your compiler to do something before compiling the source code.

        -their are many, many preprocessing directives. consts, if-else, etc. Include is the most common.

        -similar to the import statment in java.
    
    #include <stdio.h> is telling your compilier to include some of your program contents of the file with that name. So there is a file somewhere called stdio.h

    And what the directiveis saying is my current program that contains the directive needs some of the contents inside this file in order to compile. So specifically the include directive is going to have file names that end in .h these are called header files. They are called header files because they're usaually included at top of the source file.

    It's one of the first things that you do is you include all your header files.

    And again, this preprocessor directive is saying i want some of the contents inside that file. Its not a C file because the soucre files end in .c its a header file hence the .h extension.

    So what is a header file?

    Header files define information about some of the functions that are provided by that file. They're defining some info about some source code

        for ex: #include <stdio.h> this is including a C standard library header and provides fuctionality for displaying output, among many other things. Libraries are just additional functionality that's already written for you in C that you can include in your program so you don't have to re-write it, like reading and writing to the console, displaying output, etc. Many different libraries out there.

        We include this file when using the printf() function from the standard library

        So stdio.h is a header file, it defines some functionality that the compilier needs to understand what printf() means as well as other functions that deal with input/output. In other words, printf() is a function in the stdio.h file and contains many other functions.

        stdio stands for "standard input output"

        So  this library is describing it contains functionality for dealing with input output. So this is a concept of using a meaniful name that explains itself that contains all sorts of functionality for input output.

        We want to use this function called printf() that allows us to print to the console and by including stdio.h in our source code we're saying in order to compile in order to use this functionality printf(), we need to include this <stdio.h> file.

        So header files are going to specify information that the compiler uses to intergrate and utilize any reuse code, any functions within the program.

        So your going to use many many different standard library header files, stdio.h is just one of many.

        you can also create your own header files, header files allow for software reuse.

        So people made a header file that deals with input output, just like Classes in java, And the way you use it is that you include the header file. Its a software reuse that you can use in other proggrams just like java Classes.

        if you dont include <stdio.h> printf() wont work.

        Always name header files in Lowercase!!!

    Their are two ways to include header files in a program.
        1.using angle brakets (#include <stdio.h>)
            -tells the preprocessor to look for the file in one or more standard system directories, comes with the standard C library
        
        2.using double quotes (#include "Jason.h")
            -tells the preprocessor to first look in the current directory, usually means its a user-defined header file one that you created

    Every C compiler that conforms to the C11 standard will have a set of standard header files supplied with it. These are just header files hat represent libraries, C functionality that comes with the language.

    When you do use #include its common practice to use the other preprocessor directives #ifndef and #define, so that you don't include the file more than once, this is for efficiency. So if your program is using printf() for ex: displaying output to the screen, you want to tell your program, hey i need to include this aditional functionality in the standard library. You don't want to tell it to include it more than once because the preprocessor will do many things that it doesn't need to do. so typically you'll use if not defined.

    executable code normally goes into a source code file, not a header file.

    #include directive is just telling the program that we're including additional code somewhere so that we can use that libraries code and impliment it into our own code.
*/



/*
    printf() displays on the screen, is a standard library function.

    What are standard library functions?
        a function tht comes with the C program that you can use, you would not want to write your own code to display output to users because its a very common thing you already do, so don't try to reinvent the wheel. So you would use that #include directive, the standard library header which defines that printf function which allows you to print on the console.

    printf() is specifically gunna print out in the command line.

    Command line is also reffered to as the console or terminal, but by default its actually displaying the information to the standard output system, which is the command line by default thats why you see it there because thats where printf() is directing it. We're saying display this output on the console. Everything between the " " is gunna print to the console.

    Also its a statement so its gunna end in a ; this tells the compilier that we're done we printing this out.

    Not only printing text, but also values of variables and the results of computations can also be displayed, and use it for debugging
*/



/*
    We learned about output now we learn input

    you get the input from the keyboard, you enter in the console, basically like Scanner Class.

    C library contains several input functions, and scanf() is the most general of them
        -can read a variety of formats string, int, double, etc.

    stdin by default is the keyboard, its a stream, their are 3 different streams in C:
        -error stream
        -standard in (by default is the keyboard) 
        -standard output

    Using scanf its going to read from standard in and then based on what you entered its gunna convert what you entered because what you entered is gunna be text. Its gunna convert that text to the format that you provided so its gunna use format specifiers just like the print()

    if the stdin is input from the keyboard then text is read in because the keys generated text charecters: letters, digits, and punctuation.

        -when you enter the integer 2014, you type the charecters 2,0,1,4

        -if you want to store that as a numeric value rather than as a string, your program has to convert the string charecter-by-charecter to a numeric value and this is the job of the scanf function

    scanf uses a control string followed by a list of aurguments.
        -control string indicates the destination datatypes for the input stream of charecters

    the printf() uses var names, constants, and expressions as its aurgument list, you have something in double quotes and inside the double " " you use format specifiers and after the commas you could print out the variables or you can even print out the expressions.

    scanf function is different because of displaying variables, its gunna use variables that are pointed to. it basically uses pointers to variables.
        - you dont have to know anything about pointers to use this function.

    remember these 3 rules for scanf:

        -its gunna return the number of items that it sucessfully reads

        -if you use scanf() to read a value for one of the basic variable types we've discussed, precede the variable name with an & (& this is address, and because scanf takes a pointer you have to de-refrence, you have to pass the address)

        -if you use scanf() to read a string into a charecter array, don't use an &

            -So basically scanf takes two aurguments:

                -first aurgument is going to be how to convert the data that you type in. And if you store that data in a int, you use % (something like that) And if you want to store in string which we haven't learned about yet we use %s

                -second aurgument would be the actual variable name, and if the variable is everything but a string you just use & otherwise dont use the &

    scanf is the oppisite of printf, printf is going to convert int, floats, charecter strings, all these different datatypes and convert them to text so you can see the output. scanf is gunna take input text and convert it into any of the different datatypes.

    when a program uses scanf to gather input from the keyboard, it waits for you to input some text, in other words the program is actually gunna pause until yoou enter the data.

        -when you enter some text and press enter, then program proceeds and reads the input. when you press enter it will read your input.

    scanf expects input in the exact same format that you provided, so if you say %s and %d that means you have to provide string followed by space followed by int, a number and a word.
*/

