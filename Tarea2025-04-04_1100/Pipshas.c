#include <stdio.h>
#include <math.h>
int main ()

    //Ingredientes veg:Pimiento y Tofu
    //Ingredientes no veg:Peperoni, Jamón, y Salmón
    //Preguntar al usuario si quiere una pizza vegetariana o no, y mostrar un menu con
    //los ingredientes disponibles. Solo se puede elegir un ingredinte además de la mozzarella
    //y wl tomate que estan en todás las pizzas.Mostrar si la izza elegida es veg o no y los ingredientes que lleva.

{
    int ingrediente, pimiento, tofu, peperoni, jamon, salmon, pipsha,vegetariana, normal;
    printf("Desea una pipsha \"vegetariana(1) o normal(2)\"\n\n");
    printf("--Toda pipsha lleva como base Mozzarella y Tomate--\n\n");
    scanf("%d",&pipsha);

    if (pipsha==2){
        printf("\nEl menu es:\n(1)Peperoni \n(2)Jamon\n(3)Salmon\n");
        printf("--Elegir solo un ingrediente--\n");
        scanf("%d",&ingrediente);
     if (ingrediente==1){
        printf("\nSu pipsha es NORMAL con PEPERONI\n");
    } else if (ingrediente==2){
        printf("\nSu pipsha es NORMAL con Jamon\n");
    } else if (ingrediente==3){
        printf("\nSu pipsha es NORMAL con SALMON\n");
    } else {printf("\nDato INVALIDO");}
   } else if (pipsha==1){
        printf("\nEl menu es:\n(4)Tofu y \n(5)Pimiento\n");
        printf("\n--Elegir solo un ingrediente--\n");
        scanf("%d",&ingrediente);
     if (ingrediente==4){
        printf("\nSu pizza es VEGETARIANA con Tofu\n");
    } else if (ingrediente==5){
        printf("\nSu pizza es VEGETARIANA con Pimiento\n");
    }else {printf("\nDato INVALIDO");}}
    else {printf("\nDato INVALIDO");}
    return 0;
}

