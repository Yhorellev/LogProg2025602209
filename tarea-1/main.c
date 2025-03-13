/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float res;
    int x=3;
    float A=(1/2.0)*x;
    float B=(3+x)/2.0;
    float C=2*x*x;
    float D=(2+3)*x;
    res=(A+B*C)/D;
    printf ("res=%f",res);
    

    return 0;
}