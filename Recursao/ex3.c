#include <stdio.h>

void conversao_binaria(int x);

int main(){
    int num;
    scanf("%d", &num);
    if(num == 0){
        printf("0");
    }else{
        conversao_binaria(num);
    }
    
}

void conversao_binaria(int x){
    
    if(x == 0){
        return;
    }else{
        conversao_binaria(x / 2);
        printf("%d", x % 2);
    }

}