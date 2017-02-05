#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    //if even
    if(n%2 == 0)  
    {   
        if(n>=2&&n<=5)
            cout<<"Not Weird";
        else if(n>=6&&n<=20)
            cout<<"Weird";
        else if(n>20)
            cout<<"Not Weird";
    }
    
    //if odd
    else
        cout<<"Weird";
    return 0;
}
