#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct {
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
} typedef Compu;

void listarPCs(Compu pcs[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        printf("Computadora %d: \n\n", i + 1);
        printf("Velocidad: %d \n", pcs[i].velocidad);
        printf("Año de fabricacion: %d \n", pcs[i].anio);
        printf("Cant. de nucleos: %d \n", pcs[i].cantidad_nucleos);
        printf("Procesador: %s \n", pcs[i].tipo_cpu);
        printf("\n\n");
    }
}

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
    }
    listarPCs(computadoras, 5);
    return 0;
}