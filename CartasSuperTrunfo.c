#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.


    // Declaração das duas cartas
    char Carta1estado, Carta2estado;
    char Carta1codigo[4], Carta2codigo[4];
    char Carta1nomeCidade[50], Carta2nomeCidade[50];
    int Carta1populacao, Carta2populacao;
    float Carta1area, Carta2area, Carta1Densidade, Carta2Densidade;
    float Carta1pib, Carta2pib, Carta1pibper, Carta2pibper;
    int Carta1pontosTuristicos, Carta2pontosTuristicos;
   
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

    printf("\n");
    
    // Exibição dos dados cadastrados
    printf("Carta 1:\n");
    printf("Estado: %c\n", Carta1estado);
    printf("Código: %s\n", Carta1codigo);
    printf("Nome da Cidade: %s\n", Carta1nomeCidade);
    printf("População: %d\n", Carta1populacao);
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
    printf("População: %d\n", Carta2populacao);
    printf("Área: %.2f km²\n", Carta2area);
    printf("PIB: %.2f bilhões de reais\n", Carta2pib);
    printf("Número de Pontos Turísticos: %d\n", Carta2pontosTuristicos);
    printf("Densidade Populacional: %.2f Hab/Km²\n", Carta2Densidade);
    printf("PIB per Capita: %.2f reais\n", Carta2pibper);

    return 0;
}
