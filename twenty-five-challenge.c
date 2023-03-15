#include <stdio.h>

    //greatest common divisor means the factors that go into those two numbers, whats the highest factor

  /*1. first thing we are gunna do is implement our greatest common divisor program. this is going to be a function that finds the greatest common divisor between two non-negative integer values and then returns the results
    
    we should be providing function protoypes as well so that we can call them and we can palce them anywhere in the function.

    so lets do that.

    for the first function, this is a fucntion declaration, why do we make a fucntion declaration, so that we can invoke it anywhere in the program, we dont have to actually implement this fucnction above the main function when we call it. ad its just good practice, its very easy to in clear to see whats going on in the program with all the function declarations at the top.

    so remember, funtion header the first thing you do is you specify the type of data thats going to be returned. gdc is going to return an int


    
    */



int gcd (int u, int v);

//2.now we can define our function below the main and i can still invoke it and not get any errors. so now when you want to actually define the fucntion implement it,


//5. now we gunna make an absolute value function 

float absoluteValue(float x);//6.function declaration.

float squareRoot(float x);



int main () {

    int result = 0;

    result = gcd(150, 35);
    printf("The gcd of 150 and 35 is %d\n", result);



    result = gcd(1026, 405);
    printf("The gcd of 1026 and 405 is %d\n", result);


    //we can actually call the function with the printf

    printf("The gcd of 83 and 240 is %d\n\n\n\n", gcd(83, 240));


    //----------testing absolute value
    float f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int i1 = -716;
    float absoluteValueResult = 0.0;

    absoluteValueResult = absoluteValue(f1);
    printf("result = %.2f\n", absoluteValueResult);
    printf("f1 = %.2f\n", f1);

    absoluteValueResult = absoluteValue(f2) + absoluteValue(f3);
    printf("result = %.2f\n", absoluteValueResult);

    absoluteValueResult = absoluteValue( (float) i1);
    printf("result = %.2f\n", absoluteValueResult);

    absoluteValueResult = absoluteValue(i1);
    printf("result = %.2f\n", absoluteValueResult);

    printf( "%.2f\n\n\n\n", absoluteValue (-6.0) / 4);




//----------testing squar root

    printf("%.2f\n", squareRoot (-3.0));
    printf("%.2f\n", squareRoot (16.0));
    printf("%.2f\n", squareRoot (25.0));
    printf("%.2f\n", squareRoot (9.0));
    printf("%.2f\n", squareRoot (165.0));











    return 0;
}



// 3.you do the same function header int return value GCD, it has to match up with the declaration in terms of types. you could name it something else like int x for the names, but we're gunna be consistant with the names. we know its the function definition because theres brackets that define the body. this is the implementaion code

//4.all you do is write a looop and go through the loop and look at temp values based on remainders.


int gcd (int u, int v) {

    int temp;

    while (v != 0) {

        temp = u % v;
        u = v;
        v = temp;
    }

    return u;

}




float squareRoot(float x) {

    const float epsilon = .00001;//helps with squar root calculation to make sure its in within a given range
    float guess = 1.0;
    // float absoluteValue (float x); dont need this since its already provided at the top

    float returnValue = 0;//2.🤔 you could just have a single value that will be returned at the end of the fucntion.


    if (x < 0) {

        printf("Negative argument to squareRoot.\n");

        returnValue = -1.0;//3.🤔 then you could just have this insted of the return value.

        // return -1.0;//4.🤔 comment out if you wanna use the var instead

    }

    else {

        while (absoluteValue (guess * guess - x) >= epsilon) {
        guess = (x / guess + guess) / 2.0;
        }

        returnValue = guess;//5.🤔
    }

    

    //return guess;//1.🤔 an ex of having multiple return statements in a function, you could do this but its difficult to find out whats going on.

    return returnValue;//6.🤔 this is a lot cleaner if you do it like this, its easier to follow when you only got 1 return statement at the bottom



}






//7. we can now define the function

float absoluteValue(float x) {// your funtion in theory can have multiple return statements if they inside if and looop statements, and another one at the bottom of the function. like java. and this can be hard to follow, if you need to return different parts of your code, basically just store the data in a variable and return it at the bottom.

    if (x < 0) {

        x = -x;

    }

    return x;



}






