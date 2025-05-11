#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado1, estado2, codigo1[5], codigo2[5], cidade1[50], cidade2[50], buffer[4]; // Inicialização das variáveis do tipo char, string e buffer. O buffer é utilizado apenas como armazenamento temporário.

    int populacao1, populacao2, turistico1, turistico2; // Inicialização das variáveis do tipo int.

    float area1, area2, pib1, pib2, densidade1, densidade2, pibPerCapita1, pibPerCapita2; // Inicialização das variáveis do tipo float.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Primeira carta do Super Trunfo!\nEscolha a letra do estado: ");
    scanf(" %c", &estado1); // Atribui o valor da letra do estado à variável estado1. O espaço antes do %c é importante para ignorar o caractere de nova linha deixado pelo scanf anterior.

    printf("Digite o Código da carta: ");
    scanf("%s", &buffer); // O buffer é utilizado para armazenar temporariamente o código da carta. O %s lê uma string até encontrar um espaço em branco.

    sprintf(codigo1, "%c%s", estado1, buffer); // O sprintf formata a string e armazena o resultado na variável codigo1. O %c é substituído pelo valor da variável estado1 e %s pelo valor do buffer.

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &cidade1);  // O %[^\n] lê uma string até encontrar um caractere de nova linha, permitindo que o nome da cidade contenha espaços.

    printf("Digite a quantidade de habitantes da cidade: ");
    scanf("%d", &populacao1); // Atribui o valor da quantidade de habitantes à variável populacao1. O %d lê um número inteiro.

    printf("Digite a área da cidade: ");
    scanf("%f", &area1); // Atribui o valor da área à variável area1. O %f lê um número de ponto flutuante.

    printf("Digite o PIB em bilhões de reais da cidade: ");
    scanf("%f", &pib1); // Atribui o valor do PIB à variável pib1. O %f lê um número de ponto flutuante.

    printf("Digite quantos pontos turísticos tem a cidade: ");
    scanf("%d", &turistico1); // Atribui o valor do número de pontos turísticos à variável turistico1. O %d lê um número inteiro.

    densidade1 = (float) populacao1 / area1; // Cálculo da densidade populacional. A densidade é calculada dividindo a população pela área.

    pibPerCapita1 = pib1 * 1000000000  / populacao1; // Cálculo do PIB per capita. O PIB é multiplicado cem milhões e dividido pela população.
    
    // Repetir o processo para a segunda carta:
    printf("\nSegunda carta do Super Trunfo!\nEscolha a letra do estado: ");
    scanf(" %c", &estado2);

    printf("Digite o Código da carta: ");
    scanf("%s", &buffer);

    sprintf(codigo2, "%c%s", estado2, buffer);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", &cidade2);

    printf("Digite a quantidade de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões de reais da cidade: ");
    scanf("%f", &pib2);

    printf("Digite quantos pontos turísticos tem a cidade: ");
    scanf("%d", &turistico2);

    densidade2 = (float) populacao2 / area2;

    pibPerCapita2 = pib2 * 1000000000 / populacao2;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nDados da primeira carta\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f Bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n", estado1, codigo1, cidade1, populacao1, area1, pib1, turistico1, densidade1, pibPerCapita1); // Exibe os dados da primeira carta cadastrada. O %.2f formata o número de ponto flutuante para exibir duas casas decimais.

    printf("\nDados da segunda carta\nEstado: %c\nCódigo: %s\nNome da cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f Bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f\nPIB per Capita: %.2f\n", estado2, codigo2, cidade2, populacao2, area2, pib2, turistico2, densidade2, pibPerCapita2); // Exibe os dados da segunda carta cadastrada.

    return 0;
}
