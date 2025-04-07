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
    //escolhi utilizar o for para não precisar replicar o codigo novamente ai depois de por os dados e mostrado como foi pedido
    for(int i = 1; i < 3; i++){
        char estado;
        char codCarta[3];
        char nomeDaCidade[50];
        int populacao;
        float area;
        float pib;
        int pontosTuristicos;
        
        printf("Carta %d\n",i);
        printf("Qual o estado:");
        scanf(" %c",&estado);
        printf("Qual o codigo:");
        scanf("%3s",&codCarta);
        printf("Qual o nome da cidade:");
        scanf("%s",&nomeDaCidade);
        printf("Tamanho da população:");
        scanf("%d",&populacao);
        printf("O tamanho da Área:");
        scanf("%f",&area);
        printf("O PIB:");
        scanf("%f",&pib);
        printf("Numero de pontos turisticos:");
        scanf("%d",&pontosTuristicos);
        printf("Carta %d: \n Estado: %c\n Código: %c%s\n Nome da cidade: %s\n População: %d\n Área: %f km²\n PIB: %f bilhões de reais\n Número de Pontos Turísticos: %d",i,estado,estado,codCarta,nomeDaCidade,populacao,area,pib,pontosTuristicos);
        printf("\n\n");
        }
        return 0;
}
