#include <stdio.h>

int contagem_passos(int x);

int main(){
    int num;

    scanf("%d", &num);

    if (num == 1){
        printf("0");
    }else{
        printf("%d", contagem_passos(num));
    }
}

int contagem_passos(int x){
    
    if(x == 1){
        return 0;
    }

    if(x % 2 == 0){
        return 1 + contagem_passos( x / 2);
    }else{
        return 1 + contagem_passos(3 * x + 1);
    }
}