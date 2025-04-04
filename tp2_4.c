#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct {
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
} typedef Compu;

int main() {
    srand(time(NULL));
    char tipos[6][10] = {
        "Intel",
        "AMD",
        "Celeron",
        "Athlon",
        "Core",
        "Pentium"};
    Compu computadoras[5];
    for (int i = 0; i < 5; i++) {
        computadoras[i].velocidad = 1 + rand() % 3;
        computadoras[i].anio = 2015 + rand() % 10;
        computadoras[i].cantidad_nucleos = 1 + rand() % 8;
        int tipo_azar = rand() % 6;
        computadoras[i].tipo_cpu = &tipos[tipo_azar][0];
        printf("%s\n", computadoras[i].tipo_cpu);
    }
    return 0;
}