#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[50], codigo2[50];
    char cidade1[60], cidade2[60];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    // Acima defini todas as variáveis utilizadas para as cartas 1 e 2.
    //Abaixo iniciei printf/scanf para coletar e mostrar os dados da carta 1.

    printf("Insira os dados da sua carta 1 abaixo! \n");
    printf("De A à H, qual letra representa o estado da sua carta? \n");
    scanf("%c", &estado1);
    
    printf("Agora digite o código da sua carta (letra do estado seguida de um número de 01 à 04). \n");
    scanf("%s", codigo1);

    printf("Qual é o nome da cidade? \n");
    scanf("%s", cidade1);

    printf("Qual é a população da cidade? \n");
    scanf("%d", &populacao1);

    printf("Qual é a área da cidade em Km²? \n");
    scanf("%f", &area1);

    printf("Qual é o Produto Interno Bruto (PIB) da cidade? \n");
    scanf("%f", &pib1);

    printf("Quantos pontos turísticos possui essa cidade? \n");
    scanf("%d", &pontosturisticos1);

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    // Acima finalizei a carta 1 e abaixo iniciei a carta 2.

    printf("Agora insira os dados da sua carta 2 abaixo! \n");
    printf("De A à H, qual letra representa o estado da sua carta? \n");
    scanf("%c", &estado2);
    getchar();
    
    printf("Agora digite o código da sua carta (letra do estado seguida de um número de 01 à 04). \n");
    scanf("%s", codigo2);

    printf("Qual é o nome da cidade? \n");
    scanf("%s", cidade2);

    printf("Qual é a população da cidade? \n");
    scanf("%d", &populacao2);

    printf("Qual é a área da cidade em Km²? \n");
    scanf("%f", &area2);

    printf("Qual é o Produto Interno Bruto (PIB) da cidade? \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos possui essa cidade? \n");
    scanf("%d", &pontosturisticos2);

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}