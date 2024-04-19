#include <stdio.h>
#include <math.h>

double calcularRaizCuadrada(double numero) {
    if (numero >= 80 && numero <= 200) {
        return sqrt(numero);
    } else {
        printf("El numero debe estar entre 80 y 200.\n");
        return -1; // Valor de retorno que indica  error
    }
}

int main() {
    double numero, raiz;
    
    printf("Ingrese un numero entre 80 y 200: ");
    scanf("%lf", &numero);
    
    raiz = calcularRaizCuadrada(numero);
    if (raiz != -1) {
        printf("La raiz cuadrada de %.2f es %.2f\n", numero, raiz);
    }
    
    return 0;
}