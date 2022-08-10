#include <stdio.h>
#include<time.h>

int algoritmoDemorado(int n);

int main(){
    clock_t t1, soma = 0;
    int x = 10;
    t1 = clock();
    for(int i = 0; i < x; i++){
        t1 = clock();
//Algumas chamadas com diferentes valores para comparar o tempo de execução.
//      algoritmoDemorado(10);
        algoritmoDemorado(100);
//      algoritmoDemorado(200);
        t1 = clock() - t1;
        soma += t1;
    }
    printf("O tempo foi %f\n",(((float)soma)/x)/CLOCKS_PER_SEC);
    
return 0;
}
int algoritmoDemorado (int n){
    int soma = 0;
    for (int i = 0; i < n; i++){
        /*if( i % 100 == 0){
            printf("1 = %i\n\n",i);
        }*/
        for(int j = 0; j < n; j++){
            for(int k = 0; k < n; k++){
                for(int l = 0; l < n; l++){
                    soma = i + j + k + l;
                }
            }
        }
    }
return soma;
}