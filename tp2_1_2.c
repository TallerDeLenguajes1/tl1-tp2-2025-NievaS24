#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// codigo a completar
#define N 20
int main(){
    srand(time(NULL));
    int i;
    double vt[N];
    double *p_vt;
    p_vt = vt;
    for(i = 0 ; i < N ; i++){
        *(p_vt + i) = 1 + rand() % 100;
        if (i == 0) printf("( %.0f,", *(p_vt + i));
        if (i > 0 && i < (N - 1)) printf(" %.0f ,", *(p_vt + i));
        if (i == (N - 1)) printf(" %.0f)", *(p_vt + i));
    }
    return 0;
}
