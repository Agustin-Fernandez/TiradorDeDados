#include <stdlib.h>

int tirada (int tipo) {
    return (rand() % tipo + 1);
}

int resultado(int tipo, int cantidad) {
    int i = 0;
    int suma = 0;

    for (i = 0; i<cantidad; i++){
        suma += tirada(tipo);
    }

    return suma;
}

float promedio (int tipo, int cant, int N) {
    int i = 0, suma = 0;

    for(i=0; i<N; i++) {
        suma += resultado(tipo, cant);
    }

    return ((float)suma / N);
}
