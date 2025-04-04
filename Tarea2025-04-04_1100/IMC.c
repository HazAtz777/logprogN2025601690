#include <stdio.h>
#include <math.h>
int main ()
{
    //Determinar el IMC de una persona con su peso en Kg y su estatura en metros.
    //El IMC se sobtiene de la division del peso entre la altura al cuadrado.Dependiendo del resultado
    //,indicar la situacion del peso de la persona: Bajo peso(<18.4),Norma(18.5 - 24.9), Sobrepeso(25 - 29.9),
    //Obesidad C1 (30 - 34.9), Obesidad C2 (35 - 39.9),Obesidad C3 (>=40).


    float peso,estatura;
    double IMC;
    printf("Ingrese su peso en Kg:\n");
    scanf("%f",&peso);
    printf("Ingrese su estatura en metros:\n");
    scanf("%f",&estatura);

IMC=peso/(pow(estatura,2));

    if (IMC<=18.4){
        printf("Bajo peso\n");
    } else if (IMC>=18.5 & IMC<25.0){
    printf("Peso Normal\n");
    } else if(IMC>=25.0 & IMC<30.0){
    printf("Sobrepeso\n");
    } else if (IMC>=30.0 & IMC<=35.0){
    printf ("Obesidad Clase 1\n");
    } else if (IMC>=35.0 & IMC<=40.0){
    printf("Obesidad Clase 2\n");
    } else if (IMC>=40.0){
    printf ("Obesidad Clase 3\n");
    }
printf("Su IMC es:\n %f",IMC);
    return 0;
}

