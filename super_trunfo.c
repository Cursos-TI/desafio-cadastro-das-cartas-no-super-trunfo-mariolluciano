#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[50], codigo2[50];
    char cidade1[60], cidade2[60];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;
    float densidadepopulacional1, densidadepopulacional2;
    float pibpercapita1, pibpercapita2;
    float superpoder1, superpoder2;

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
    scanf("%lu", &populacao1);

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
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    /* Abaixo foi feito o a parte intermediária do desafio.
    Calculei a densidade populacional e o pib per capita da carta 1. */
    densidadepopulacional1 = (populacao1 / area1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);

    pibpercapita1 = (pib1 * 1000000000 / populacao1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    // Abaixo foi calculado o Super Poder da carta 1.
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontosturisticos1 + (1.0 / densidadepopulacional1) + pibpercapita1;
    printf("Super Poder: %.2f\n", superpoder1);

    // Acima finalizei a carta 1 e abaixo iniciei a carta 2.

    printf("Agora insira os dados da sua carta 2 abaixo! \n");
    getchar();
    printf("De A à H, qual letra representa o estado da sua carta? \n");
    scanf("%c", &estado2);
    
    printf("Agora digite o código da sua carta (letra do estado seguida de um número de 01 à 04). \n");
    scanf("%s", codigo2);

    printf("Qual é o nome da cidade? \n");
    scanf("%s", cidade2);

    printf("Qual é a população da cidade? \n");
    scanf("%lu", &populacao2);

    printf("Qual é a área da cidade em Km²? \n");
    scanf("%f", &area2);

    printf("Qual é o Produto Interno Bruto (PIB) da cidade? \n");
    scanf("%f", &pib2);

    printf("Quantos pontos turísticos possui essa cidade? \n");
    scanf("%d", &pontosturisticos2);

    getchar();
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

    /* Abaixo foi feito o a parte intermediária do desafio.
    Calculei a densidade populacional e o pib per capita da carta 2. */
    densidadepopulacional2 = (populacao2 / area2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);

    pibpercapita2 = (pib2 * 1000000000 / populacao2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    // Abaixo foi calculado o Super Poder da carta 2.
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontosturisticos2 + (1.0 / densidadepopulacional2) + pibpercapita2;
    printf("Super Poder: %.2f\n", superpoder2);
    
    // Abaixo foi feita a comparação das duas cartas, atributo por atributo.
    int comparacaopopulacao, comparacaoarea, comparacaopib, comparacaopontosturisticos, comparacaodensidadepopulacional, comparacaopibpercapita;
    int comparacaosuperpoder;
    
    comparacaopopulacao = populacao1 > populacao2;
    comparacaoarea = area1 > area2;
    comparacaopib = pib1 > pib2;
    comparacaopontosturisticos = pontosturisticos1 > pontosturisticos2;
    comparacaodensidadepopulacional = densidadepopulacional1 < densidadepopulacional2;
    comparacaopibpercapita = pibpercapita1 > pibpercapita2;
    comparacaosuperpoder = superpoder1 > superpoder2;

    printf("Comparação das cartas (atributo por atributo): \n");
    printf("Se o resultado for (1), carta 1 venceu. Se o resultado for (0), carta 2 venceu.\n");
    printf("População: carta 1 venceu (%d)\n", comparacaopopulacao);
    printf("Área: carta 1 venceu (%d)\n", comparacaoarea);
    printf("PIB: carta 1 venceu(%d)\n", comparacaopib);
    printf("Pontos Turísticos: carta 1 venceu (%d)\n", comparacaopontosturisticos);
    printf("Densidade Populacional: carta 2 venceu (%d)\n", comparacaodensidadepopulacional);
    printf("PIB per Capita: carta 1 venceu (%d)\n", comparacaopibpercapita);
    printf("Super Poder: carta 1 venceu (%d)\n", comparacaosuperpoder);

    return 0;
}