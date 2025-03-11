#include <stdio.h>

int main() {

    // Definição das variáveis
    char estado01[20], estado02[20];
    char cidade01[20], cidade02[20];
    char carta01[10], carta02[10];
    unsigned long int populacao01, populacao02;
    int pontos01, pontos02;
    int resultado01, resultado02, resultado03, resultado04, resultado05, resultado06, resultado07;
    float area01, area02;
    float pib01, pib02;
    float densidade01, densidade02;
    float pibpc01, pibpc02;
    float Superpoder01, Superpoder02;
    
    // Resgisto da Primeira Carta
    printf("               Jogo Super trunfo.\n"); 
    printf("   Agora, vamos atribuir valores a primeira carta.\n");
    printf("Digite o nome do estado (ex: Alagoas)\n");
    scanf("%s", estado01);
    printf("Digite o nome da cidade (ex: Maceió)\n");
    scanf("%s", cidade01);
    printf("Digite a área da cidade em km² \n");
    scanf("%f", &area01);
    printf("Digite a população da cidade \n");
    scanf("%lu", &populacao01);  // Usando %lu para unsigned long int
    printf("Digite o PIB da cidade \n");
    scanf("%f", &pib01);
    printf("Digite os pontos turísticos da cidade (ex: 10)\n");
    scanf("%d", &pontos01);
    printf("Finalize ao atribuir um código para a carta (ex: A001, B002)\n");
    scanf("%s", carta01); 

    // Cálculo da Primeira Carta
    densidade01 = populacao01 / area01;
    pibpc01 = pib01 / populacao01;
    Superpoder01 = populacao01 + area01 + pib01 + pontos01 + pibpc01 + (1 / densidade01); 
    
    // Apresentação dos dados registrados da primeira carta
    printf("---------* Carta 01 *---------\n");
    printf("Estado: %s\n", estado01);
    printf("Cidade: %s\n", cidade01);
    printf("População: %lu\n", populacao01);
    printf("Área: %.2f km²\n", area01);
    printf("PIB: R$ %.2f\n", pib01);
    printf("Pontos turísticos: %d\n", pontos01);
    printf("Código da carta: %s\n", carta01);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade01);
    printf("PIB per capita: R$ %.2f\n", pibpc01);
    printf("Superpoder: %.2f\n", Superpoder01);

    // Registro da Segunda Carta
    printf("                                           \n");
    printf("***Agora, vamos atribuir valores a segunda carta***\n");
    printf("Digite o nome do Estado (ex: Bahia)\n");
    scanf("%s", estado02);
    printf("Digite o nome da cidade (ex: Salvador)\n");
    scanf("%s", cidade02);
    printf("Digite a área da cidade em KM²\n");
    scanf("%f", &area02);
    printf("Digite a população da cidade\n");
    scanf("%lu", &populacao02);  // Usando %lu para unsigned long int
    printf("Digite o PIB da cidade\n");
    scanf("%f", &pib02);
    printf("Digite os pontos turísticos da cidade (ex: 10)\n");
    scanf("%d", &pontos02);
    printf("Agora, finalize ao atribuir um código para a carta (ex: A001, B002)\n");
    scanf("%s", carta02);
    
    // Cálculo da densidade populacional e PIB per capita para a segunda cidade
    densidade02 = populacao02 / area02;
    pibpc02 = pib02 / populacao02;
    Superpoder02 = populacao02 + area02 + pib02 + pontos02 + pibpc02 + (1 / densidade02);
    
    // Apresentação dos dados registrados da segunda carta
    printf("---------* Carta 02 *---------\n");
    printf("Estado: %s\n", estado02);
    printf("Cidade: %s\n", cidade02);
    printf("População: %lu\n", populacao02);
    printf("Área: %.2f km²\n", area02);
    printf("PIB: R$ %.2f\n", pib02);
    printf("Pontos turísticos: %d\n", pontos02);
    printf("Código da carta: %s\n", carta02);
    printf("Densidade populacional: %.2f habitantes por km²\n", densidade02);
    printf("PIB per capita: R$ %.2f\n", pibpc02);
    printf("Superpoder: %.2f\n", Superpoder02);

    // Comparação entre as cartas
    resultado01 = populacao01 > populacao02;
    resultado02 = area01 > area02;
    resultado03 = pib01 > pib02;
    resultado04 = pontos01 > pontos02;
    resultado05 = densidade01 < densidade02;  // Menor densidade vence
    resultado06 = pibpc01 > pibpc02;
    resultado07 = Superpoder01 > Superpoder02;
  
    // Apresentação dos resultados
    // 1 carta 2 vence se nao carta 1 vence
    printf("                                           \n");
    printf("Resultado da comparação entre as cartas:\n");
    printf("População: Carta %d venceu (%d)\n", resultado01 + 1, resultado01);
    printf("Área: Carta %d venceu (%d)\n", resultado02 + 1, resultado02);
    printf("PIB: Carta %d venceu (%d)\n", resultado03 + 1, resultado03);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultado04 + 1, resultado04);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado05, resultado05);
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultado06 + 1, resultado06);
    printf("Super Poder: Carta %d venceu (%d)\n", resultado07 + 1, resultado07);
   
    return 0;
}
