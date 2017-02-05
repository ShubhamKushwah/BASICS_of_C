#include <math.h>       /*Not Required*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>     /*Not Required*/
#include <limits.h>     /*Not Required*/
#include <stdbool.h>    /*Not Required*/

int main(){
    int n, i; 
    scanf("%d",&n);
    int *arr = malloc(sizeof(int) * n);     /*Allocates and assigns the pointer with the size we want, here the size is the sizeof 'int' multiplied by the input no.*/
    
    //taking input
    for(i = 0 ; i< n ; i++){
       scanf("%d",&arr[i]);
    }
    
    //printing in reverse
    for(i = n-1 ; i>=0 ; i--){
       printf("%d ", arr[i]);
    }
    return 0;
}
