#include <iostream>
#include <string.h>

using namespace std;

int main(){

    int test, i;
    string str;
    cin>>test;
    for(;test>0;test--){  //here we are not initializing test with anything.
        cin>>str;
        
        //for even ones
        for(i=0;i<str.size();i++)
        {   if(i%2==0)
            cout<<str[i];
        }
        cout<<" ";    //the blank space in between these elements when printing out.
        
        //for odd ones
        for(i=0;i<str.size();i++)
        {
            if(i%2==1)
            cout<<str[i];
        }
        cout<<endl; //a next line printed after each test case.
    }
    return 0;
}
