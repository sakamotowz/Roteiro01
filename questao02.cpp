#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float * gerador ( size_t n );
float media_i(float num[], size_t qtd_elementos);
float media_r(float num[], size_t qtd_elementos);

int main(){
    size_t n = 1000;
    size_t n1 = 1000000;
    size_t n2 = 1000000000;
    // Média dos 10 ^ 3 números aleatórios
    float * res = gerador ( n );
    float media = media_i(res, n);
    float media2 = media_r(res,n);
/* Para ver os números gerados aleatoriamente.  for ( size_t i = 0; i < n ; i ++) {
    printf("%f\n",res[i]);
    } */
  printf("Media iterativa de 10 ^ 3 elementos: %.2f\n",media);
  printf("Media recursiva de 10 ^ 3 elementos: %.2f\n\n",media2);  

    // Média dos 10 ^ 6 números aleatórios
     res = gerador ( n1 );
    media = media_i(res, n1);
    media2 = media_i(res, n1);

    printf("Media iterativa de 10 ^ 6 elementos: %.2f\n",media);
    printf("Media recursiva de 10 ^ 6 elementos: %.2f\n\n",media2);

    // Média dos 10 ^ 9 números aleatórios
     res = gerador ( n2 );
     media = media_i(res, n2);
    media2 = media_i(res, n2);

    printf("Media iterativa de 10 ^ 9 elementos: %.2f\n",media);
    printf("Media recursiva de 10 ^ 9 elementos: %.2f\n\n",media2);

    return 0;
}

float * gerador ( size_t n ) {
srand ( time ( NULL ));
float * res = (float*) malloc( n * sizeof (int));
for ( size_t i = 0; i < n ; i ++) {
res [ i ] = rand () % 1000;
}
return res ;
}
float media_i(float num[], size_t qtd_elementos){
    float soma = 0;
    for(size_t i = 0; i < qtd_elementos; i++){
//Vai realizar um somatório de todos os números gerados.
        soma += num[i];
    }
//Somatório dividido pela quantidade de elementos.
    return soma/qtd_elementos;
}
float media_r(float num[], size_t qtd_elementos){
//Se a quantidade de elemtos for 1, vai ser retornado o primeiro elemento do vertor.
    if(qtd_elementos == 1){
        return num[0];
    }else{
//Criação de uma variável para armazenar o somatório recursivo.
        float aux = (num[qtd_elementos - 1] + (qtd_elementos - 1) * media_r(num, qtd_elementos - 1));
//A função vai retornar o somatório pela quantidade de elementos.
        return aux/qtd_elementos;
        }

}