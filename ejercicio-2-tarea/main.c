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
    float a,b,at,pt;
    //asignacion de valores
    a=3;
    b=4;
    pt=a+b+sqrt(pow(b,2)+pow(a,2));
    at=b*a/2;
    printf("El area total es%f\n",at);
    printf("El perimetro total es %f\n",pt);
    
    

    return 0;
}
