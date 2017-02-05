#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int a;
    double b;
    char c[100] = " ";
    scanf("%d%lf", &a, &b);
    scanf("\n");    //to avoid the next line of above scanf to be inputted in  fgets as user input
    fgets(c, 100, stdin);
    printf("%d\n%0.1lf\n%s%s", a+i, b+d, s, c); //0.1lf is to set the precision of decimal places to 1 only
    
        return 0;
}
