#include <stdio.h>
//variables externas
extern int a,b,c;
float f,gh;

//definición de varaibles, aquí indicamos donde es que se van a usar
int a,b,c;
int main()
{
    //variable initialization 
    a = 10;
    b = 23;
    c = a+b;
    //printf("Value of sum is: %d",c);
    printf("Value of sum is: %d",c);
    return 0;
}