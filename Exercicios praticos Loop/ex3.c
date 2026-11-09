#include <stdio.h>

int main(){
    
    int a ;
    int i , j ;

    printf("Digite um numero: ");
    scanf("%d", &a);

    for( i = 0 ; i <= a ; i++){
        for( j = 0 ; j <= a ; j++){
            if( j == i){
                printf("+");
            }else{
                printf("*");
            }
        }
        printf("\n");
    }
}