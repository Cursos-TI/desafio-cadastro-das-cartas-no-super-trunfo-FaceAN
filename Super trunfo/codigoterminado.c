#include <stdio.h>

int main() {

    //Definição das Variáveis

    char estado01[20], estado02[20];
    char cidade01[20], cidade02[20];
    char carta01[10], carta02[10];
    int populacao01, populacao02;
    int pontos01, pontos02;
    float area01, area02;
    float pib01, pib02;
    float densidade01, densidade02;
    float pibpc01, pibpc02;

    //Resgisto da Primeira Carta

    printf("               Jogo Super trunfo.\n"); 
    printf("   Agora, vamos atribuir valores a primeira carta.\n");
    printf("Digite o nome do estado (ex: Alagoas)\n");
    scanf("%s", estado01);
    printf("Digite o nome da cidade (ex: Maceió)\n");
    scanf("%s", cidade01);
    printf("Digite a área da cidade em km² (ex: 1000.000 )\n");
    scanf("%f", &area01);
    printf("Digite a população da cidade (ex: 1000000)\n");
    scanf("%d", &populacao01);
    printf("Digite o PIB da cidade (ex: 1000000.000)\n");
    scanf("%f", &pib01);
    printf("Digite os pontos turísticos da cidade (ex: 10)\n");
    scanf("%d", &pontos01);
    printf("Finalize ao atribuir um código para a carta (ex: A001, B002)\n");
    scanf("%s", carta01); 

    // Cálculo da densidade populacional e PIB per capita
    densidade01 = populacao01 / area01;
    pibpc01 = pib01 / populacao01;

    //Apresentação dos dados registrados da primeira carta

    printf("---------* Carta 01 *---------\n");
    printf("estado: %s\n", estado01);
    printf("cidade: %s\n", cidade01);
    printf("população: %d\n", populacao01);
    printf("área: %.2f km²\n", area01);
    printf("PIB: R$ %.2f\n", pib01);
    printf("pontos turísticos: %d\n", pontos01);
    printf("Código da carta: %s\n", carta01);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade01);
    printf("PIB per capita: R$ %.2f\n", pibpc01);

    //Registro da Segunda Carta

    printf("                                           \n");
    printf("***Agora, vamos atribuir valores a segunda carta***\n");
    printf("Digite o nome do Estado (ex: Bahia)\n");
    scanf("%s", estado02);
    printf("Digite o nome da cidade (ex: Salvador)\n");
    scanf("%s", cidade02);
    printf("Digite a aréa da cidade em KM² (ex: 1000.000)\n");
    scanf("%f", &area02);
    printf("Digite a população da cidade (ex: 2000000)\n");
    scanf("%d", &populacao02);
    printf("Digite o PIB da cidade (ex: 2000000.000)\n");
    scanf("%f", &pib02);
    printf("Digite os pontos turísticos da cidade (ex: 10)\n");
    scanf("%d", &pontos02);
    printf("Agora, finalize ao atribuir um código para a carta (ex: A001, B002)\n");
    scanf("%s", carta02);
    
    // Cálculo da densidade populacional e PIB per capita para a segunda cidade
    densidade02 = populacao02 / area02;
    pibpc02 = pib02 / populacao02;

    //Apresentação dos dados registrados da segunda carta

    printf("---------* Carta 02 *---------\n");
    printf("Estado: %s\n", estado02);
    printf("cidade: %s\n", cidade02);
    printf("população: %d\n", populacao02);
    printf("área: %.2f km²\n", area02);
    printf("PIB: R$ %.2f\n", pib02);
    printf("pontos turísticos: %d\n", pontos02);
    printf("Código da carta: %s\n", carta02);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade02);
    printf("PIB per capita: R$ %.2f\n", pibpc02);
    
    return 0;
}