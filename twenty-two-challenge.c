#include <stdio.h>
#include <stdbool.h>

/*challenge is to create a program that will find all the prime numbers from 3-100
*/

int main () {

//    bool x; //so normally in C89 the datatype for true/false is underscore bool _BOOL, but you can actually have a type definition in later versions and in the standard bool file to just use bools and also allows you to use true or false as values

    int p;//counter for outer loop, for 1-100

    int i;//inner loop, will be initialized in the loop, checks for our previous primes

    int primes [50] = {0};//creating an array and gunna initialize everything to 0, size 50

    int primeIndex = 2;//this variable is gunna make sure that we start at the correct index cuase we gunna hard code the first 2 numbers.

    bool isPrime;//yells us if we found a prime number

    //hardcode first two prime numbers
    primes[0] = 2;
    primes[1] = 3;

    //we gunna need a outer loop that goes through all the numbers from 5-100. we know 4 isnt a prime number so we gunna start at 5. we also gunna skip even numbers using p = p + 2. we dont need to look at even numbers. remember to test in chunks

    for (p = 5; p <= 100; p = p + 2) {

        isPrime = true;//only gunna set it to false if ive gone through the entire list of previosly generated primes or ive got to the latest prime and make sure its not the square root. so isPrime is gunna be true for each iteration from 5-100 skipping 2.

        //now our inner loop is going to go through all of our prime numbers that we have prevously generated and its gunna go to make sure we havn't gone greater than the square root of the i. so we gunna go through all of the numbers until we get to the sqaure root and that can be out exit condition.
        
        // we also gunna exit if we find a prime number using: isPrime && p / primes[i] >= primes[i]; this is really the key to the algrithum. so we gunna try to find all our primes from 5-100 skipping even numbers. and then in our inner loop we gunna start at 1 and go all the way unil we either set isPrime to true or we've reached our exit condition, which is the number p divided by prime sub-i is greater than prime sub-i, and thats essentially ending when we find a square root because that another condition of the algorithm

        for (i = 1; isPrime && p / primes[i] >= primes[i]; ++i){
            if (p % primes[i] == 0) {
                isPrime = false;//if its even then it becomes false, and we dont wann add p to our array
            }
        }

        if (isPrime == true) {//wanna add to our array if its a prime
            primes[primeIndex] = p;//p is the prime number we found
            ++primeIndex;//make sure we at the prime index
        }

    }




    for (i = 1; i < primeIndex; ++i){
            printf("%i ", primes[i]);
        }

    printf("\n");








    return 0;
}