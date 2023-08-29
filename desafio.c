#include<stdio.h>

int main (){
float media;

printf("\nDigite sua media: ");
scanf("%f", &media);

if (media >= 7.0){
    printf("\nVoce esta aprovado");
}else if(media <4){
   printf("\nVoce esta reprovado");
}else if(media >= 4 < 7){
    printf("\nVoce esta de recuperacao");
}

}