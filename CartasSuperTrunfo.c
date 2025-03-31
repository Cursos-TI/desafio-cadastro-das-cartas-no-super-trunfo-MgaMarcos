#include <stdio.h>
int main() {
    // Declaração das duas cartas
    char Carta1estado, Carta2estado;
    char Carta1codigo[4], Carta2codigo[4];
    char Carta1nomeCidade[50], Carta2nomeCidade[50];
    unsigned long int Carta1populacao, Carta2populacao, Carta1resultadoPop, Carta2resultadoPop;
    float Carta1area, Carta2area, Carta1Densidade, Carta2Densidade;
    float Carta1pib, Carta2pib, Carta1pibper, Carta2pibper;
    int Carta1pontosTuristicos, Carta2pontosTuristicos, Carta1resultadoPT, Carta2resultadoPT;
    float Carta1superpoder, Carta2superpoder;
    int Carta1resultadoSP,  Carta1resultadoArea, Carta1resultadoPIB,  Carta1resultadoDP, Carta1resultadoPP;
    int Carta2resultadoSP, Carta2resultadoArea, Carta2resultadoPIB, Carta2resultadoDP, Carta2resultadoPP;

    // Entrada de dados para a primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &Carta1estado);
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", &Carta1codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %s", &Carta1nomeCidade);
    printf("Digite a população: ");
    scanf(" %d", &Carta1populacao);
    printf("Digite a área (km²): ");
    scanf(" %f", &Carta1area);
    printf("Digite o PIB (bilhões de reais): ");
    scanf(" %f", &Carta1pib);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &Carta1pontosTuristicos);
    
    
    printf("\n");
    
    // Entrada de dados para a segunda carta
    printf("Cadastro da Carta 2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &Carta2estado);
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", &Carta2codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %s", &Carta2nomeCidade);
    printf("Digite a população: ");
    scanf(" %d", &Carta2populacao);
    printf("Digite a área (km²): ");
    scanf(" %f", &Carta2area);
    printf("Digite o PIB (bilhões de reais): ");
    scanf(" %f", &Carta2pib);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &Carta2pontosTuristicos);
    
    Carta1Densidade = Carta1populacao / Carta1area;
    Carta2Densidade = Carta2populacao / Carta2area;
    Carta1pibper = Carta1pib / Carta1populacao;
    Carta2pibper = Carta2pib / Carta2populacao;

    Carta1superpoder = (float) Carta1populacao + Carta1area + Carta1pib + Carta1pibper + Carta1pontosTuristicos + (1 / Carta1Densidade);
    Carta2superpoder = (float) Carta2populacao + Carta2area + Carta2pib + Carta2pibper + Carta2pontosTuristicos + (1 / Carta2Densidade);

    // Comoaração das cartas
    Carta1resultadoPop = Carta1populacao > Carta2populacao;
    Carta1resultadoArea = (int) Carta1area > Carta2area;
    Carta1resultadoPIB = (int) Carta1pib > Carta2pib;
    Carta1resultadoPT = (int) Carta1pontosTuristicos > Carta2pontosTuristicos;
    Carta1resultadoDP = (int) Carta1Densidade > Carta2Densidade;
    Carta1resultadoPP = (int) Carta1pibper > Carta2pibper;
    Carta1resultadoSP = (int)  Carta1superpoder > Carta2superpoder;

    printf("\n");
    
    // Exibição dos dados cadastrados
    printf("Carta 1:\n");
    printf("Estado: %c\n", Carta1estado);
    printf("Código: %s\n", Carta1codigo);
    printf("Nome da Cidade: %s\n", Carta1nomeCidade);
    printf("População: %u\n", Carta1populacao);
    printf("Área: %.2f km²\n", Carta1area);
    printf("PIB: %.2f bilhões de reais\n", Carta1pib);
    printf("Número de Pontos Turísticos: %d\n", Carta1pontosTuristicos);
    printf("Densidade Populacional: %.2f Hab/Km²\n", Carta1Densidade);
    printf("PIB per Capita: %.2f reais\n", Carta1pibper);
    
    printf("\n");
    
    printf("Carta 2:\n");
    printf("Estado: %c\n", Carta2estado);
    printf("Código: %s\n", Carta2codigo);
    printf("Nome da Cidade: %s\n", Carta2nomeCidade);
    printf("População: %u\n", Carta2populacao);
    printf("Área: %.2f km²\n", Carta2area);
    printf("PIB: %.2f bilhões de reais\n", Carta2pib);
    printf("Número de Pontos Turísticos: %d\n", Carta2pontosTuristicos);
    printf("Densidade Populacional: %.2f Hab/Km²\n", Carta2Densidade);
    printf("PIB per Capita: %.2f reais\n", Carta2pibper);    

    printf("\n");

    printf("Comparação das Cartas \n");
    printf("População Carta 1: %u \n", Carta1resultadoPop);
    printf("Área Carta 1: %d \n", Carta1resultadoArea);
    printf("PIB Carta 1: %d \n", Carta1resultadoPIB);
    printf("Pontos Turisticos Carta 1: %d \n", Carta1resultadoPT);
    printf("Densidade Populacional Carta 1: %d \n", Carta1resultadoDP);
    printf("PIB Per Capta Carta 1: %d \n", Carta1resultadoPP);
    printf("Super Poder Carta 1: %d \n", Carta1resultadoSP);

    return 0;
}
