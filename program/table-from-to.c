#include<stdio.h>

void main(){

    int from;
    int to;
    from = 7;
    to = 10;
    for(int i=from;i<=to;i++){
            for(int j = 1 ; j <= 10 ; j++){
                printf("%d\n",i * j);
            }
    }

}
