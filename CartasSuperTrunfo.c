#include <stdio.h>



int main() {

     printf("######   Desafio nivel novato cartas super trunfo!  ######\n");


  // VARIAVEIS DAS CARTAS

     char codigo[30];
     char letra[10];
     char cidade[50];
     float popula;
     float are;
     float pib;
     int npt;

  // ENTRADA DE DADOS

printf("Digite a letra do estado:\n");
       scanf(" %s", &letra);

printf("Digite o código da carta:\n");
       scanf(" %s", &codigo);

printf("Digite o nome cidade:\n");
       scanf(" %s", &cidade);

printf("Digite a população da cidade:\n");
       scanf("%f", &popula);

printf("Digite o tamanho da área:\n");
       scanf("%f", &are);

printf("Digite o PIB da cidade:\n");
       scanf("%f", &pib);

printf("Digite a quantidade de pontos turísticos:\n");
       scanf("%d", &npt);


  // SAIDA DE DADOS


printf("Estado: %s\n", letra);
printf("Codigo da carta: %s\n", codigo);
printf("Nome da cidade: %s\n", cidade);
printf("População: %.2f milhões de habitantes\n", popula);
printf("Área: %.2f km²\n", are);
printf("PIB: R$%.2f milhões de reais\n", pib);
printf("Numero de pontos turísticos: %d\n", npt);

   

   return 0;

      
}
