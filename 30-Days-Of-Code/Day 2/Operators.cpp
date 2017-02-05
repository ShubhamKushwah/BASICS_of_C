#include <iostream>
#include <math.h> /*since we have used the round function.*/

using namespace std;

int main()
{
    double cost, total=0;
    int tip, tax;

    cin>>cost>>tip>>tax;

    total = cost + tip*cost/100 + tax*cost/100; /*calculation*/
   
    cout<<"The total meal cost is "<<round(total)<<" dollars."; /*to round off the answer.*/

return 0;
}
