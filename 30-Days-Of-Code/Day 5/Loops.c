#include <math.h>   //Not Required  
#include <stdio.h>  
#include <string.h> //Not Required
#include <stdlib.h> //Not Required
#include <assert.h> //Not Required
#include <limits.h> //Not Required
#include <stdbool.h>    //Not Required

int main() {
    int n, i;
    scanf("%d", &n);
    
    //here the loop is.
    for(i=1;i<=10;i++)
    printf("%d x %d = %d\n", n, i, n*i);
        
    return 0;
}
