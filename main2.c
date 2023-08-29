#include<stdio.h>

int main (){
float salario;

printf("\nDigite seu salario: ");
scanf("%f", &salario);

if (salario >= 1320){
    printf("\nVoce ganha mais que um salario minimo");
}else{
   printf("\nVoce nao ganha mais que um salario minimo");
}

}