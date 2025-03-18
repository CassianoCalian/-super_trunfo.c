#include <stdio.h>

int main() {

    // CARTA 1 ----------

    char estado1[50], codigoCarta1[50], nomeCidade1[50];
    int populacao1;
    float areaKM1, pib1;
    int pontoTuristico1;


    // CARTA 2 ------------

    char estado2[50], codigoCarta2[50], nomeCidade2[50];
    int populacao2;
    float areaKM2, pib2;
    int pontoTuristico2;

    printf("Digite o primeiro Estado:\n");
    scanf("%s", estado1);

    printf("Digite o código da primeira carta:\n");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade (sem espaços):\n");
    scanf("%s", nomeCidade1); // Sem espaços no nome da cidade

    printf("Digite o tamanho da população da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da primeira Cidade:\n");
    scanf("%f", &areaKM1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite quantos pontos turísticos a cidade possui:\n");
    scanf("%d", &pontoTuristico1);

    printf("\nDados da Carta 1 salvos, vamos para a segunda carta!\n\n");

    printf("Digite o segundo Estado:\n");
    scanf("%s", estado2);

    printf("Digite o código da segunda carta:\n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade (sem espaços):\n");
    scanf("%s", nomeCidade2); // Sem espaços no nome da cidade

    printf("Digite o tamanho da população da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da segunda Cidade:\n");
    scanf("%f", &areaKM2);

    printf("Digite o PIB da segunda cidade:\n");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos a cidade possui:\n");
    scanf("%d", &pontoTuristico2);

    // Exibir os dados
    printf("\n----- CARTA 1 -----\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %f km²\n", areaKM1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontoTuristico1);

    printf("\n----- CARTA 2 -----\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %f km²\n", areaKM2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontoTuristico2);

    return 0;
}
