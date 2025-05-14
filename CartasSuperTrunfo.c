#include <stdio.h>

int main() {
    //Carta 1
    char estado1[20];
    char codigo1[30];
    char nome1[30];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    //Carta 2
    char estado2[20];
    char codigo2[30];
    char nome2[30];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;



    // Início do programa
    printf("Digite os Dados da Carta 1\n");
    
    // Entrada dos dados da Carta 1
    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", nome1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Números de Pontos Turísticos: ");
    scanf("%d", &pontos1);


    // Início do programa
    printf("Digite os Dados da Carta 2\n");
    
    // Entrada dos dados da Carta 1
    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);


    //Cálculo da Densidade Populacional e PIB per Capita
    float densidade1, percapita1, densidade2, percapita2;
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    percapita1 = pib1 / populacao1;
    percapita2 = pib2 / populacao2;



    //Exibição das Cartas
    printf("Carta 1");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f (em bilhões)\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", percapita1);


    printf("Carta 2");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f (em bilhões)\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", percapita2);    
    
    return 0;                       

}