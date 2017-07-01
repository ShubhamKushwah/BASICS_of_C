#include <iostream> /*header files*/
#include <iomanip>  /*For setprecision()*/

using namespace std;

int main() {
    
    int i = 4;
    double d = 4.0;
    string s = "HackerRank "; /*initialised string*/
  
  int n;
    double l;
    string str;
    
cin>>n;
cin>>l;
getline(cin>>ws,str);   /* 'ws' stands for white spaces*/
cout<<(i+n)<<endl;
cout.setf(ios::fixed);          /*fixing the digits after the decimal point*/
cout<<setprecision(1)<<(d+l)<<endl;      
cout<<s<<str;                  /*'+' can also be used to concatenate in b/w s and str */

return 0;
}
