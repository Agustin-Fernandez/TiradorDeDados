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

char numero[5] = "2\0";

printf("%d\n",(10^0));
printf("%d\n",strlen(numero));
printf("%d",textoAInt(numero));
    return 0;
}
