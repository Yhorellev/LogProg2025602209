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
    float l,pt,at,r;
    l=7;
    pt=l*M_PI/2+3*l+8/5.0*l;
    at=l*l+M_PI*pow(l/2,2)/2+(l/5)*(l/5*3)*2+(l/5)*(l/5)*2;
    
    printf("El perimetro total es:=%f\n",pt);
    printf("El area total es:=%f",at);



    return 0;
}
