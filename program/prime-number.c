#include<stdio.h>

void main(){
    int prime = 5;

    for(int i = 0;i < 100;i++){
            prime = i;
        if(((prime % prime) == 0) && ((prime%1) == 0)){
        printf("prime %d %d\n",prime,prime / prime);
    }
    }

}
