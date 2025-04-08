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
    char estado;
    char codCarta[3];
    char nomeDaCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade = 0.0;
    float pibPessoa = 0.0;
    float superPoder = 0.0;
        
    printf("Carta 1\n");
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
    printf("\n");
        
    pibPessoa = (pib*pow(10.0,9.0))/populacao;
    densidade = populacao/area;
    superPoder = populacao+area+pib+pontosTuristicos+pibPessoa+densidade;
    
    printf(" Carta 1: \n Estado: %c\n Código: %c%s\n Nome da cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais",estado,estado,codCarta,nomeDaCidade,populacao,area,pib,pontosTuristicos,densidade,pibPessoa);
    printf("\n\n");

    char estado2;
    char codCarta2[3];
    char nomeDaCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2 = 0.0;
    float pibPessoa2 = 0.0;
    float superPoder2 = 0.0;
    
    printf("Carta 2\n");
    printf("Qual o estado:");
    scanf(" %c",&estado2);
    printf("Qual o codigo:");
    scanf("%3s",&codCarta2);
    printf("Qual o nome da cidade:");
    scanf("%s",&nomeDaCidade2);
    printf("Tamanho da população:");
    scanf("%d",&populacao2);
    printf("O tamanho da Área:");
    scanf("%f",&area2);
    printf("O PIB:");
    scanf("%f",&pib2);
    printf("Numero de pontos turisticos:");
    scanf("%d",&pontosTuristicos2);
    printf("\n");
        
    pibPessoa2 = (pib2*pow(10.0,9.0))/populacao2;
    densidade2 = populacao2/area2;
    superPoder2 = populacao2+area2+pib2+pontosTuristicos2+pibPessoa2+densidade2;
        
    printf(" Carta 2: \n Estado: %c\n Código: %c%s\n Nome da cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Número de Pontos Turísticos: %d\n Densidade Populacional: %.2f hab/km²\n PIB per Capita: %.2f reais",estado2,estado2,codCarta2,nomeDaCidade2,populacao2,area2,pib2,pontosTuristicos2,densidade2,pibPessoa2);
    printf("\n\n");

    if(populacao > populacao2){
        printf("População: Carta 1 venceu \n");
    }else{
        printf("População: Carta 2 venceu\n");
    }if(area > area2){
        printf("Área: Carta 1 venceu \n");
    }else{
        printf("Área: Carta 2 venceu \n");
    }if (pib < pib2){
        printf("PIB: Carta 2 venceu \n");
    }else{
        printf("PIB: Carta 1 venceu \n");
    }if(pontosTuristicos < pontosTuristicos2){
        printf("Pontos Turísticos: Carta 2 venceu \n");
    }else{
        printf("Pontos Turísticos: Carta 1 venceu \n");
    }if(densidade > densidade2){
        printf("Densidade Populacional: Carta 1 venceu \n");
    }else{
        printf("Densidade Populacional: Carta 2 venceu \n");
    }if (pibPessoa < pibPessoa2){
        printf("PIB per Capita: Carta 2 venceu \n");
    }else{
        printf("PIB per Capita: Carta 1 venceu \n");
    }if(superPoder > superPoder2){
        printf("Super Poder: Carta 1 venceu \n");
    }else{
        printf("Super Poder: Carta 2 venceu \n");
    }
        return 0;
}
