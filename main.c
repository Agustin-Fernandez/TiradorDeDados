#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "PromediosDados.h"

int main()
{
    srand(time(NULL));
    int tipo, intentos;

    /// Entrada
    printf("Ingrese el tipo del dado ");
    scanf("%d",&tipo);
    printf("\nIngrese la cantidad de dados ");
    scanf("%d",&intentos);

    /// Salida
    printf("%f",promedio(tipo,intentos));

    return 0;
}
