#include <stdio.h>

int main(){

    int idade, matricula;
    float altura;
    char nome [20];

    printf("Digite seu nome: ");
    scanf("%s",&nome);

    printf("Digite sua matrícula: ");
    scanf("%d", &matricula);

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    printf("Digite sua altura: ");
    scanf("%f",&altura);
    printf("\n\n");

    printf("Nome do aluno: %s\nMatrícula: %d\nIdade: %d\nAltura: %.2f\n", nome, matricula, idade, altura);
    return 0;

}