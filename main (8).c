//Escreva uma função que peça dois números inteiros ao usuário e exibe o valor soma seguido pelo maior deles.
#include <stdio.h>
int main (){
    int n1,n2,valor;
    printf("digite um numero:");
    scanf("%d",&n1);
    printf("digite outro numero:");
    scanf("%d",&n2);
    valor=n1+n2;
    if (n1+n2>=0){
        printf("o resultado é:%d",valor);
    }
 return 0;   
}