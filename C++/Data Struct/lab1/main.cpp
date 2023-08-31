#include<iostream>
#include<fstream>
#include<string>
#include<cctype>
#include "ArgumentManager.h"
using namespace std;

bool isPalindrome(string s,int start){
    int length = s.length(); // takes the length of the string

    if (start >= length/2)
    {
        return true;
    }
    if (s[start] != s[length - 1 -  start])
    {
        return false;
    }
    
    return isPalindrome(s,start + 1);


}
int main(int argc, char *argv[]){

    ArgumentManager am(argc, argv);
    ifstream input(am.get("input"));
    ofstream output(am.get("output"));

    string line;

    while(getline(input,line))
    {
        bool result = isPalindrome(line,0);
        output << result << endl;
    }


    

}