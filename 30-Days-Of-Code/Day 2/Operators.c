#include <stdio.h>
#include <stdlib.h>

int main()
{
    double cost, total;
    int tip, tax;

    scanf("%lf%d%d", &cost, &tip, &tax);
    total = cost + tip*cost*0.01 + tax*cost*0.01;
    printf("The total meal cost is %0.0lf dollars.", round(total));
    return 0;
}
