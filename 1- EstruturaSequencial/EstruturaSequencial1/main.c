
#include <stdio.h>
/*
//Exercício 1
int main (){
    
    float nota1, nota2;
    float media;

    printf("Insira a primeira nota:");
    scanf("%f", &nota1);

    printf("Insira a segunda nota:");
    scanf("%f", &nota2);

    media = ((nota1 * 0.4) + (nota2 * 0.6));

    printf("Média= %f", media);
}
*/

//Exercício 2 
int main (){
    
    float vlr1, vlr2, vlr3;
    float salarioLiquido;

    printf("Insira seu salário bruto: ");
    scanf("%f", &vlr1);

    printf("Insira o valor de desconto: ");
    scanf("%f", &vlr2);

    printf("Insira a comissão do salário: ");
    scanf("%f", &vlr3);

    salarioLiquido = (vlr1 - vlr2 + vlr3);

    printf("Salário Líquido= %f", salarioLiquido);
}