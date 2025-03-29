#include <bits/stdc++.h>
using namespace std;

void pattern(int N)
{
    // First row starts by printing a single 1.
    int start = 1;

    // Outer loop for no. of rows
    for (int i = 0; i < N; i++)
    {

        // if the row index is even then 1 is printed first 1 in that row.
        if (i % 2 == 0)  start = 1;

        // if odd, then the first 0 will be printed in that row.
        else
            start = 0;

        // We alternatively print 1's and 0's in each row by using
        // the inner for loop.
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }

        cout << endl;
    }
}

int main(){
    int N;
    cout << "Enter value of number:";
    cin >> N;
    pattern(N);
}