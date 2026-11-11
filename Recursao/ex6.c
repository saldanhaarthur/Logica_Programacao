#include <stdio.h>

int ackerman(int m, int n);

int main(){
    int n, m;

    scanf("%d %d", &m, &n);

    printf("%d",ackerman(m, n));

}

int ackerman(int m, int n){

    if (m == 0){
        return n+1;
    }else if( m > 0 && n == 0){
        return ackerman(m-1, 1);
    }else{
        return ackerman(m-1, ackerman(m, n-1));
    }
}