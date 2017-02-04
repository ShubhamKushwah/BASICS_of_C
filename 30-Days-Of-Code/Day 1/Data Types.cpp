#include <iostream> 
#include <iomanip>  //For setprecision()
#include <limits>   //not required

using namespace std;

int main() {
    
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    int a;
    double b;
    string c;

    cin>>a>>b;
  
    cin.ignore(256, '\n');  //this is used because whenever you use "getline" just after "cin" the user hits enter to commit changes to "cin" and the string catches it up, so to ignore that
    getline(cin, c);
    
    cout<<a+i<<endl<<fixed<<setprecision(1)<<b+d<<endl<<s<<c;   //to print everything out, note that I have not copied that string c after that s, but just printed it after that
    
     return 0;
}
