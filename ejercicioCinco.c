#include <stdio.h>

int main()
{
    float precioUno, descuento, nuevo;
    printf("ingrese el precio del producto: ");
    scanf("%f", &precioUno);

    descuento = 0.15 * precioUno;
    nuevo = precioUno - descuento;

    printf("precio original: %.2f\n", precioUno);
    printf("este es el descuento : %.2f\n", descuento);
    printf("Este es el precio nuevo aplicando el descuento: %.2f\n", nuevo);



    return 0;
}
