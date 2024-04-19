
#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Declaración de variables
    float num1, num2;

    // Solicitar al usuario que ingrese los números
    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    // Comparar los números para determinar cuál es mayor y cuál es menor
    if (num1 > num2) {
        printf("El primer numero %.2f es mayor que el segundo numero %.2f\n", num1, num2);
        printf("El segundo numero %.2f es menor que el primer numero %.2f\n", num2, num1);
    } else if (num2 > num1) {
        printf("El segundo numero %.2f es mayor que el primer numero %.2f\n", num2, num1);
        printf("El primer numero %.2f es menor que el segundo numero %.2f\n", num1, num2);
    } else {
        printf("Ambos numeros son iguales: %.2f = %.2f\n", num1, num2);
    }

    return 0;
}
