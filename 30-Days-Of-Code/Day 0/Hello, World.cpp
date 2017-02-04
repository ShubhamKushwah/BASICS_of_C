#include <cmath>    //Not Required
#include <cstdio>   //Not Required
#include <vector>   //Not Required
#include <iostream>     //For input/output (cin/cout)
#include <algorithm>    //Not Required

using namespace std;    //That includes stuffs like cout, cin, string, vector, map, etc.

int main() {    //the main function of return type integer, the compiler starts executing from here
    string name;    //declaring a string "name"
    getline(cin,name);      //this is used to get a whole line of input which includes "blank spaces"
    cout << "Hello, World." << endl;    //to print hello world and "endl" is used to go to next line
    cout<<name;     //printing out the string

    return 0;   //an integer function must return some value and here it is 0 to ensure that program ran successfully.
}
