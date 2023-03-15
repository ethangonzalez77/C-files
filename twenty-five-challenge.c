#include <stdio.h>

    //greatest common divisor means the factors that go into those two numbers, whats the highest factor

  /*first thing we are gunna do is implement our greatest common divisor program. this is going to be a function that finds the greatest common divisor between two non-negative integer values and then returns the results
    
    we should be providing function protoypes as well so that we can call them and we can palce them anywhere in the function.

    so lets do that.

    for the first function, this is a fucntion declaration, why do we make a fucntion declaration, so that we can invoke it anywhere in the program, we dont have to actually implement this fucnction above the main function when we call it. ad its just good practice, its very easy to in clear to see whats going on in the program with all the function declarations at the top.

    so remember, funtion header the first thing you do is you specify the type of data thats going to be returned. gdc is going to return an int


    
    */



int gcd (int u, int v);

//now we can define our function below the main and i can still invoke it and not get any errors. so now when you want to actually define the fucntion implement it,





int main () {

    int result = 0;

    result = gcd(150, 35);
    printf("The gcd of 150 and 35 is %d\n", result);



    result = gcd(1026, 405);
    printf("The gcd of 1026 and 405 is %d\n", result);


    //we can actually call the function with the printf

    printf("The gcd of 83 and 240 is %d\n", gcd(83, 240));


    return 0;
}



// you do the same function header int return value GCD, it has to match up with the declaration in terms of types. you could name it something else like int x for the names, but we're gunna be consistant with the names. we know its the function definition because theres brackets that define the body. this is the implementaion code

//all you do is write a looop and go through the loop and look at temp values based on remainders.


int gcd (int u, int v) {

    int temp;

    while (v != 0) {

        temp = u % v;
        u = v;
        v = temp;
    }

    return u;

}










