#include <stdio.h>

int main () {

      // Variaveis para os dados das cartas do jogador 1 e jogador 2.

char estado, estado02;
char codigoCarta[5], codigoCarta02[5];
char nomecidade[50], nomecidade02[50];
float populacao, populacao02;
float area, area02;
float pib, pib02;
int npt, npt02;


                   // Início do jogo de coleta de dados.


printf("###### INICO DO JOGO SUPER TRUNFO! ######\n");

printf("###### Preencha os dados das cartas do jogador 01 ######\n");

    
                   // Preenchimento dos dados das cartas jogador 1.
     printf("Carta 1:\n");
     printf("Digite a letra do estado:\n");
           scanf(" %c", &estado);

     printf("Digite o código da carta:\n");
           scanf(" %s", &codigoCarta);

     printf("Digite o nome da cidade:\n");
           scanf(" %s", &nomecidade);

     printf("Digite o numero de habitantes da cidade:\n");
           scanf("%f", &populacao);

     printf("Digite o tamanho da área da cidade:\n");
           scanf("%f", &area);

     printf("Digite o PIB da cidade:\n");
           scanf("%f", &pib);

     printf("Digite o numero de pontos turisticos da cidade:\n");
           scanf("%d", &npt);



            // Preenchimento dos dados das cartas jogador 2.

printf("###### Preencha os dados das cartas do jogador 02 ######\n");
     printf("Carta 2:\n");
     printf("Digite a letra do estado:\n");
           scanf(" %c", &estado02);

     printf("Digite o código da carta:\n");
           scanf(" %s", &codigoCarta02);

     printf("Digite o nome da cidade:\n");
           scanf(" %s", &nomecidade02);

     printf("Digite o numero de habitantes da cidade:\n");
           scanf("%f", &populacao02);

     printf("Digite o tamanho da área da cidade:\n");
           scanf("%f", &area02);

     printf("Digite o PIB da cidade:\n");
           scanf("%f", &pib02);

     printf("Digite o numero de pontos turisticos da cidade:\n");
           scanf("%d", &npt02);

      

                   //Exibição dos dados das cartas ja preenchidas do jogador 1.

printf("###### Dados da carta do jogador 01 ######\n");
     printf("Carta 1:\n");
     printf("Estado: %c\nCodigo da carta: %s\nNome da cidade: %s\nPopulação: %.2f\n", estado, codigoCarta, nomecidade, populacao);
     printf("Área: %.2f km²\nPIB: R$ %.2f bilhoes de reais\nNumero de pontos turisticos: %d\n", area, pib, npt);


                  //Exibição dos dados das cartas ja preenchidas do jogador 2.


printf("###### Dados da carta do jogador 02 ######\n");
     printf("Carta 2:\n");
     printf("Estado: %c\nCodigo da carta: %s\nNome da cidade: %s\nPopulação: %.2f\n", estado02, codigoCarta02, nomecidade02, populacao02);
     printf("Área: %.2f km²\nPIB: R$ %.2f bilhoes de reais\nNumero de pontos turisticos: %d\n", area02, pib02, npt02);
     
     
       


     return 0;




}
