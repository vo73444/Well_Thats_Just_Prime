#include <iostream>

using namespace std;

void prime_factors(int n, int i);

int main(){

    int n = 0;

    cout << "\nEnter a number greater than 1: ";

    cin >> n;

    while(n <= 1){
        // keeps prompting user if they entered a number less than or equal to 1
        cout << "\n\nI cannot calculate the prime factors of " << n << "\n\n";

        cout << "\nEnter a number greater than 1: ";

        cin >> n;
    }

    cout << "\n\nThe prime factors of " << n << " are ";

    prime_factors(n, 2);

    cout << "\n\n\n";


    return 0;
}

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
