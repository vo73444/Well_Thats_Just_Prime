#include <iostream>
#include "prime_factorization.hpp"


using namespace std;


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
