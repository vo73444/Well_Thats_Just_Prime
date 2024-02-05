#include <iostream>

#include "prime_factorization.hpp"

using namespace std;

void prime_factors(int n, int i){

    //2 is our base case
    if(n <= 2)
        return;

    if(n % i == 0){

        //compares n and i in order to find out if it is the last number 
        if(n != i){
            //if not the last number then it prints i and seperates with a
            //comma  
            cout << i << ", "; 

            //calls function with with the same i value but with n being
            //divided by i
            prime_factors(n/i, i);
        }

        else{

            //if n == i then it prints "and" then the factor followed by a 
            //period to make it look nice
             cout << "and " << i << ".";


             prime_factors(n/i, i);
        }
    }

//if n is not divisible by the current i then it increments it and calls
//the function again 
    else{

        i++;

        prime_factors(n, i);
    }

}
