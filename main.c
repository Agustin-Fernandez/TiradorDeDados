#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "PromediosDados.h"
#include "IntefazTexto.h"

int main()
{
    srand(time(NULL));
    int tipo, intentos, cantidad;
/*
    /// Entrada
    printf("Ingrese el tipo del dado: ");
    scanf("%d",&tipo);
    printf("Ingrese la cantidad de dados por tirada: ");
    scanf("%d",&cantidad);
    printf("\nIngrese la cantidad de intentos: ");
    scanf("%d",&intentos);

    /// Salida
    printf("%f\n",promedio(tipo,cantidad,intentos));
    //printf("%s\n",distribucion);
*/
if(esTirada("2d6"))
    printf("\nEs una tirada\n");
else
    printf("\nNO es tirada\n");
    return 0;
}
