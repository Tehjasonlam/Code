#include <iostream>
using namespace std;
/*Given two non-negative integers low and high. 
Return the count of odd numbers between low and high (inclusive).*/


int main()
{
    int low;
    int high;

    cout << "Enter Low and High" << endl;
    cin >> low >> high;

    int i = (high - low) / 2;
    if (high % 2 != 0 || low % 2 != 0) // if  high/low does not have a remainder of 0 //
    {
        i+=1;
    }

    int odd = i; 
    int even = (high - low + 1) - odd;
    cout << "Count of odd numbers is " << odd << endl;
    cout << "Count of even numbers is " << even << endl;
    return 0;


}
/*
#include <bits/stdc++.h>
 
using namespace std;
 
// Return the number of odd numbers
// in the range [L, R]
int countOdd(int L, int R){
 
    int N = (R - L) / 2;
 
    // if either R or L is odd
    if (R % 2 != 0 || L % 2 != 0)
        N += 1;
 
    return N;
}
 
// Driver code
int main()
{
    int L = 3, R = 7;
    int odds = countOdd(L, R);
    int evens = (R - L + 1) - odds;
     
    cout << "Count of odd numbers is " << odds << endl;
    cout << "Count of even numbers is " << evens << endl;
    return 0;
}

*/