#include <iostream>
using namespace std;

int main() 
{ 
 int arr[] = {8000,9000,2000,3000,6000,1000}; 
 cout<<average(arr[])<<endl; 
 return 0;
}

double average(int[] arr) 
{
    double sum = 0;
    int maxv = INT_MIN, minv = INT_MAX;
    for (auto s : arr) 
    {
        sum += s;
        maxv = max(maxv, s);
        minv = min(minv, s);
    }
    return (sum - maxv - minv) / (arr.size() - 2);
}
