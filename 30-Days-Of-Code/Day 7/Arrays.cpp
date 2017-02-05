#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector <int> A(n);    //to assign the size of an array to a given input
    
    //taking input
    for(int i=0; i < n; i++)
       cin >> A[i];
    
    //outputting in reverse
    for(int i=n-1; i >= 0; i--)
        cout<<A[i]<<" ";
    return 0;
}
