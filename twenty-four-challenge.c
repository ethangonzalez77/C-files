#include <stdio.h>

void add ();//3.now this will get rid of the warning, some compilers will give you an error, now if you compile again youll get no erors. so this is what a function declaration does, it allows you to put the function anywhere.

//4.now if you didnt have the function declaration at the top and you had the implementation above where you were calling it, then you also wont see the error because the compiler is going to know about the function before it actually tries to invoke it






/* 5. this will also work, without the function declaration. now usually you want to declare all your functions at the top of the source file for good practice, so keep doing that, but if you do get out of that habit, you either have to declare your functions before you call them or you have to provide function prototypes because you dont want warnings of errors in your program.


    // void add ();        without the function declaration


    void add () {


    }



    int main () {


        return 0;
    }






*/







int main () {

    //1.we gunna invoke a function, that wont take any parameters

    add();




    return 0;
}

void add () {

    //2.we are gunna implament this fucntion. when we compile this empty function, the compiler will give you a warning: implicit declaration of function 'add' is invalid in C99

    //2.we can get rid of this warning by using a function declaration, you can declare the function on top of the source file, basically telling the compiler that your going to use it somewhere, but you dont know where the implentation is.




    }

















