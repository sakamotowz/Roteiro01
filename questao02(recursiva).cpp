#include <stdlib.h>
#include <stdio.h>
#include <time.h>

float * gerador ( size_t n) {
    srand ( time ( NULL )); 
    size_t i;
    float * solucao = (float *) malloc ( n * sizeof ( int ));
    for ( i = 0; i < n ; i ++) {
        solucao [ i] = rand () % 1000;
    }
    return solucao;
}
float x(int n, float *V) {
    if (n == 0)
        return 1; 
    else
        return (V[n - 1] + (n - 1) * x (n-1, V))/n;
}
int main () {
    float * V = gerador(700);
    int i;
    int n = 100;
    for (i = 0; i < n ; i ++) {
        printf ("Solução: %f \n", V[i]);
    }
    float M = x(n, V);
    printf("MEDIA: %f", M);
    return 0;
}
