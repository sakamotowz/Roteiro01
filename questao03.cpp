#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int palidromo(char str[100], int n){
  
 int i;
    
    for(i = 0; i < n; i++) 
    if(str[i] != str[n - i - 1])
    return 0; 
    return 1;
}

int main(int argc, char** argv){
   
    char frase[100];
    printf("Digite uma frase: ");
    scanf("%s", frase);
             if(palidromo(frase, strlen(frase))){
                printf(" %s e uma palindromo \n", frase);
    }else {
        printf(" %s nao e um palidromo \n", frase);
    }

    return 0;
}
