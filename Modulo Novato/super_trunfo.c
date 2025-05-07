#include <stdio.h>

int main(){

    int carta1 = 1, carta2 = 2;
    char a,b;
    char a01[4], b02[4];
    char ncidade1[20], ncidade2[20];
    int popu1, popu2;
    float area1, area2;
    float pib1, pib2;
    int npt1, npt2;

    printf("Insira a inical do Estado da carta 1: ");
    scanf("%f",a);

    printf("Insira o código da carta 1: ");
    scanf("%s",a01);

    printf("Insira o nome da Cidade da carta 1: ");
    scanf("%s",ncidade1);

    printf("Insira a população da carta 1: ");
    scanf("%d",popu1);

    printf("Insira a área da carta 1: ");
    scanf("%f",area1);

    printf("Insira o PIB da carta 1: ");
    scanf("%f",pib1);

    printf("Insira o número de pontos turísticos da carta 1: ");
    scanf("%d",npt1);

    return 0;

}