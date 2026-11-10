#include <stdio.h>

int calculo_mdc(int x, int y);

int main(){
    int x;
    int y;
    int max_div_c;

    scanf("%d %d", &x, &y);

    printf("%d", calculo_mdc( x , y));
}

int calculo_mdc(int x, int y){
    
    if (y == 0){
        return x;
    }else{
        return calculo_mdc(y, x % y); //Aqui meu y vai estar passando como x, já que ele e o divisor do anterior e assim vai indo...
    }
}