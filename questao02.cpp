#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float * gerador ( size_t n ) {
srand ( time ( NULL ));
float * res = (float*) malloc( n * sizeof ( int ));
for ( size_t i = 0; i < n ; i ++) {
res [ i ] = rand () % 1000;
}
return res ;
}

int main(){
    printf ( " Sequencia ␣ aleatoria \ n " );
    size_t n = 100;
    float * res = gerador ( n );
for ( size_t i = 0; i < n ; i ++) {
    printf ( " res [% lu ]=% f \ n " , i , res [ i ]);
}

    return 0;
}