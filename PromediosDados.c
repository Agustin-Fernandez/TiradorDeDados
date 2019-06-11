#include <stdlib.h>

int tirada (int tipo) {
    return (rand() % tipo + 1);
}

float promedio (int tipo, int N) {
    int i = 0, suma = 0;

    for(i=0; i<N; i++) {
        suma += tirada(tipo);
    }

    return ((float)suma / N);
}
