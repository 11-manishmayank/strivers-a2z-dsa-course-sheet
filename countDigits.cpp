#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int countDigits(int n){
    // Initialize a counter variable to store the count of digits.
    int cnt = 0;
    
    while(n > 0){
        cnt = cnt + 1;
        n = n / 10;
    }
    return cnt;
}

int main() {
    int N; 
    cout << "Enter number whose digit you want to count: ";
    cin >> N;
    int digits = countDigits(N);
    cout << "Number of Digits in N: "<< digits << endl;
    return 0;
}


/*OPTIMAL SOLUTION  T(n)= 0(1)

int countDigits(int n){

    // Initialize a variable 'cnt' to
    // store the count of digits.
    int cnt = (int)(log10(n)+1);

    // The expression (int)(log10(n)+1) calculates the number of digits in 'n'
    // and casts it to an integer.
    
    // Adding 1 to the result accounts for the case when 'n' is a power of 10,
    // ensuring that the count is correct.
   
    // Finally, the result is cast to an integer to ensure it is rounded
    // down to the nearest whole number.
    
    // Return the count of digits in 'n'.
    return cnt;
}





*/