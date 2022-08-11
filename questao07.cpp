#include <stdio.h>
#include <math.h>

float raiz(float x, float x0, float e);

int main(){

    printf("Valor estimado: %f\n",raiz(13, 3.5, 0.001));


    return 0;
}
float raiz(float x, float x0, float e){
    float ea = abs(pow(x0, 2) - x);
    if(ea <= e){
        return x0;
    } else{
        float x_new = (pow(x0,2) + x)/(2*x0);
/* Para ver as etapas de aproximação
    printf("%f\n",x_new);*/
        return raiz(x, x_new,e);
        
    }
    
}