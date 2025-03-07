#include <stdio.h>
#include <math.h>

int main()
{int sq,L;
float a,p,tri1,tri2,rec;
L=2;
sq=L*L;
tri1=(L*L)/2;
tri2=(((3.0/2.0)*(L))*L)/2;
rec=((1.0/4.0)*L)*(2*L);
double pit1=sqrt((pow(L,2))+(pow(L,2)));
double pit2=sqrt(pow((3.0/2.0)*L,2)+pow(L,2));


 p=pit2+(2*pit1)+(5*L);
 a=rec+sq+(2*tri1)+tri2;


printf ("El Perimetro es %f\n", p);
printf ("El Area es %f\n", a);


return 0;
}

