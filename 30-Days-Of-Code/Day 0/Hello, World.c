#include <stdio.h>    /*Header file used because of input/output (  fgets(), printf()  )*/
#include <string.h>   /*Header file used because we have used string in our program*/
#include <math.h>     /*Not Required*/
#include <stdlib.h>   /*Not Required*/

int main()    /*The main function of return type integer, the compiler starts executing from here*/
{
    char str[30];   /*Declared a string of 30 characters, you can set it as much as you want*/
    fgets (str, 30, stdin);   /*to take input of 30 characters from standard input library*/
    printf("Hello, World.");  /*to print out hello world*/
    printf("\n%s", str);    /*to print out our string*/
    return 0;   /*every function whose return type is sth else than "void" need to return sth, and here to return 0 means the program ran successfully*/
}
