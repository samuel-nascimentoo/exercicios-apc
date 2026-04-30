#include<stdio.h>
#include<stdlib.h> 

int main(){

    char colunainicial, colunafinal;
    int linhainicial, linhafinal;

    scanf("%c%d %c%d", &colunainicial, &linhainicial, &colunafinal, &linhafinal);

    if(abs(colunainicial - colunafinal) == 2 && abs(linhainicial - linhafinal) == 1){
        printf("VALIDO\n");
    } 
    else if (abs(colunainicial - colunafinal) == 1 && abs(linhainicial - linhafinal) == 2){
        printf("VALIDO\n");
    }
    else{
        printf("INVALIDO\n");
    }

    return 0;
}