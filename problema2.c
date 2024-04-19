/*Leer el nombre de un producto, precio compra, precio venta y la existencia, imprimir la ganancia
de dicho producto y la ganancia total.*/
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char nombreProducto[30];
    int precioCompra, precioVenta, existencias;
    int ganancias, gananciasTotal;

    printf("Dime el nombre del producto: ");
    scanf("%s", &nombreProducto);
    printf("Dime el precio de compra: ");
    scanf("%i", &precioCompra);
    printf("Dime el precio de venta: ");
    scanf("%i", &precioVenta);
    printf("Dime las existencias del producto: ");
    scanf("%i", &existencias);
    ganancias = precioVenta - precioCompra;
    printf("La ganancia es de: %i\n", ganancias);
    gananciasTotal = ganancias * existencias;
    printf("La ganancia total es de %i", gananciasTotal);
    return 0;
}
