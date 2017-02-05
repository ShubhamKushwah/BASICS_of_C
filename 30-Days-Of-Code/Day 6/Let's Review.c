#include <stdio.h>
#include <string.h>
#include <math.h>   /*Not Required*/
#include <stdlib.h> /*Not Required*/

int main(){

    int test, i;
    char str[10000];    /*since the maximum size given there is 10000 characters length*/
    scanf("%d", &test);
    for(;test>0;test--){
        scanf("%s",str);
        /*strlen(<string name>); is used to find the length of the string.*/
        for(i=0;i<strlen(str);i++)
        {   if(i%2==0)
            printf("%c", str[i]);
        }
        printf(" ");
        for(i=0;i<strlen(str);i++)
        {
            if(i%2==1)
            printf("%c", str[i]);
        }
        printf("\n");
    }
    return 0;
}
