#include <stdio.h>

void hanoi(int n, char origem, char auxiliar, char destino);


int main(){
    int n;

    scanf("%d", &n);

    hanoi(n, 'A', 'B', 'C');
}

void hanoi(int n, char origem, char auxiliar, char destino){

    if(n > 0){
        hanoi(n-1, 'A', 'B', 'C');
        printf("Mova o disco torre %c para a torre %c \n", origem, destino);
        hanoi(n-1, 'B', 'C', 'A');
    }
}