#include <stdlib.h>
#include <string.h>

int digitoAInt (char num) {
    switch (num) {
    case '0':
        return 0;
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    }
}

int textoAInt (char numero[]) {
    int i;
    int resultado = 0;

    for (i = 0; i < strlen(numero); i++) {
        resultado += digitoAInt(numero[i]) * (10^(strlen(numero)-i-1));
    }

    return resultado;
}