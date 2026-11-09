#include <stdio.h>

int soma_algarismos(int n);

int main(){
    int n;
    int soma;

    scanf("%d", &n);
    if (n < 0){
        return 0;
    }else{
        soma = soma_algarismos(n);
    }

    printf("%d", soma);
}

int soma_algarismos(int n){
    int soma_al;

    if (n==0){
        return 0;
    }else{
        return (n % 10) + soma_algarismos(n / 10);
    }
}