#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fibonacci (int n);

int main(){
    char str[20];

    while(1){
        scanf("%s", str);

        if (strcmp(str, "SAIR")==0){
            break;
        }
        int n = atoi(str);
        if (n % 2 != 0){
            printf("%d FIBONACCI: %d\n", n, fibonacci(n));
        }
    }

}

int fibonacci(int n){
    
    if (n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
    
}