/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    double l,pt,at;
    l=7;
    double H=sqrt(pow(l,2)+pow(l*3,2));
    pt=M_PI*(3*l)/2+2*H+4*l+3*l;
    at=M_PI*pow(3*l/2,2)/2+3*(l*3*l);
    printf("el perimetro toal es =%f",pt);
    printf("el area total es =%f",at);
    

    return 0;
}
