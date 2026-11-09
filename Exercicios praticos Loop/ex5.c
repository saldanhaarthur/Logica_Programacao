#include <stdio.h>

int main(){
    int verdade = 0;
    int cont = 2;
    int vet[98] ;


    for(int i = 2 ; i <= 100 ; i++){
        for(int j = 2 ; j * j <= i ; j++){
            if ( i % j == 0){
                verdade = 1;
                
            }
        }
        if( verdade == 0){
            printf("%d e primo \n", i);
        }
    }   
}
