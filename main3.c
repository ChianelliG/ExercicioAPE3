#include<stdio.h>

int main (){
float altura;

printf("\nDigite sua altura: ");
scanf("%f", &altura);

if (altura >= 1.8){
    printf("\nVoce e maior que 1.8m");
}else{
   printf("\nVoce e menor que 1.8m");
}

}