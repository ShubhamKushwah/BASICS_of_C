#include <math.h>       /*Not Required*/
#include <stdio.h>      
#include <string.h>     /*Not Required*/
#include <stdlib.h>     /*Not Required*/
#include <assert.h>     /*Not Required*/
#include <limits.h>     /*Not Required*/
#include <stdbool.h>    /*Not Required*/

int main(){
    int N;
    scanf("%d", &N);

    if(N%2 == 0)
    {   if(N>=2&&N<=5)
            printf("Not Weird");
        else if(N>=6&&N<=20)
            printf("Weird");
        else if(N>20)
            printf("Not Weird");
    }
    else
        printf("Weird");
    return 0;
}
