#include <stdio.h>


int main() {
    //declarando as variaveis

    //cartra 1
    char carta[3]= ("A01");
    char estado[50];
    char cidade[50];
    int população;
    float area;
    float pib;
    int pontosTuristicos;

   // carta 2
    char carta2[3];
    char estado2[50];
    char cidade2[50];
    int população2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf(" para cadastrar sua carta\n imforme os dados a seguir\n Comece pelo codigo da carta\n utilize o formato A01\n");

    printf(" Imforme o codigo: ");
    scanf("%s", carta);
    printf("Qual Estado?: ");
    scanf("%s", estado);
    printf("Nome da Cidade: ");
    scanf("%s", cidade);
    printf("Qual a População?: ");
    scanf("%.2f", &população);
    printf("Qual a area?: ");
    scanf("%.2f", &area);
    printf("E seu PIB é: ");
    scanf("%.2f", &pib);
    printf("Quantos pontos turisticos tem?: ");
    scanf("%d", &pontosTuristicos);

    printf("Cadastre mais uma carta\n");

    printf(" Imforme o codigo: ");
    scanf("%s", carta2);
    printf("Qual Estado?: ");
    scanf("%s", estado2);
    printf("Nome da Cidade: ");
    scanf("%s", cidade2);
    printf("Qual a População?: ");
    scanf("%f", &população2);
    printf("Qual a area?: ");
    scanf("%.2f", &area2);
    printf("E seu PIB é?: ");
    scanf("%.2f", &pib2);
    printf("Quantos pontos turisticos tem?: ");
    scanf("%d", &pontosTuristicos2);

    printf("Voce Cadastrou As Cartas\n\n");


    // exibiçãpo dos dados 

    printf("Carta 1\n\n");

    printf("Codigo: %s\n", carta);
    printf("Estado: %s\n", estado);
    printf("Cidade: %s\n", cidade);
    printf("População: %.2f\n", população);
    printf("Area: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n\n", pontosTuristicos);

    printf("Carta 2\n\n");

     printf("Codigo: %s\n", carta2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %.2f\n", população2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n\n", pontosTuristicos2);

    printf("Cartas Cadastradas com Sucesso!!");

    return 0;
}
