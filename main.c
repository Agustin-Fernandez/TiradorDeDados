#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "PromediosDados.h"

int main()
{
    srand(time(NULL));
    int tipo, intentos, cantidad;

    /// Entrada
    printf("Ingrese el tipo del dado ");
    scanf("%d",&tipo);
    printf("Ingrese la cantidad de dados por tirada ");
    scanf("%d",&cantidad);
    printf("\nIngrese la cantidad de intentos ");
    scanf("%d",&intentos);

    /// Salida
    printf("%f",promedio(tipo,cantidad,intentos));

    return 0;
}
