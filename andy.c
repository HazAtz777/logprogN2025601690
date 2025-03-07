#include <stdio.h>
#include <math.h>

int main()
{int L,cu;
float x,y,pie,br,ca,a,pi;

L=7.0;
 x=1.0/5.0;
 y=3.0/5.0;
 pi=3.1416;

 br=(x*L)*(y*L);
cu=L*L;
 pie=(x*L)*(x*L);
 ca=(pi*(L/2.0))*(L/2.0);

 double p= ((23.0/5.0)*(L))+((pi*L)/2.0);
 a= (2.0*br)+cu+(2.0*pie)+(ca/2.0);

printf ("El Perimetro es %f\n",p);
printf ("El Area es %f\n", a);


return 0;
}
