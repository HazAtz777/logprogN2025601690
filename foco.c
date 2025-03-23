#include <stdio.h>
#include <math.h>

int main()
{
    int L;
    float pit,tri,punta,a,rec;
    double punt,p,r;
    L=7;
     pit=sqrt(pow((3*L),2)+pow(L,2));
     punt=M_PI*(3*L);
     p=(7.0*L)+(2*pit)+(punt/2);

    rec=3*((3.0*L)*L);
     r=(3.0*L)/2;
    punta=M_PI*(pow(r,2));

    a=rec+(punta/2);

    printf ("El preimetro es %f \n", p);
    printf ("El area total %f ",a);


}
