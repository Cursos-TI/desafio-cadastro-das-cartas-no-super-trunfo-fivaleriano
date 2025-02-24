#include <stdio.h>

int main () {

      // Variaveis para os dados das cartas do jogador 1 e jogador 2.

char* estado, estado02;
char* codigoCarta[5], codigoCarta02[5];
char* nomecidade[50], nomecidade02[50];
float populacao, populacao02;
float area, area02;
float pib, pib02;
int npt, npt02;
float sp, sp2;


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


           float dp, dp2;  // variavel para calcular Densidade populacional.
           float ppc, ppc2; // variavel para PIB per capita.
     
                // Calculo da Densidade populacional e PIB per capita do jogador 1.
     
                dp = populacao / area;
     
                ppc = pib / populacao;
     
                // Calculo da Densidade populacional e PIB per capita do jogador 2.
     
                dp2 = populacao02 / area02;
     
                ppc2 = pib02 / populacao02;

                // Calculo para definição do Super Poder!

           sp = (float)populacao + area + pib + npt + ppc + dp; // calculo para o super poder da primeira carta.

           sp2 = (float)populacao02 + area02 + pib02 + npt02 + ppc2 + dp2; // calculo para o super poder da segunda carta.

      

                   //Exibição dos dados das cartas ja preenchidas do jogador 1.

printf("###### Dados da carta do jogador 01 ######\n");
     printf("Carta 1:\n");
     printf("Estado: %c\nCodigo da carta: %s\nNome da cidade: %s\nPopulação: %.2f\n", estado, codigoCarta, nomecidade, populacao);
     printf("Área: %.2f km²\nPIB: R$ %.2f bilhoes de reais\nNumero de pontos turisticos: %d\n", area, pib, npt);
     printf("Densidade populacional: %.2f pessoas/km²\nPIB per capita: %.2f reais\n", dp, ppc);
     printf("Super Poder:%.2f\n", sp);


                  //Exibição dos dados das cartas ja preenchidas do jogador 2.


printf("###### Dados da carta do jogador 02 ######\n");
     printf("Carta 2:\n");
     printf("Estado: %c\nCodigo da carta: %s\nNome da cidade: %s\nPopulação: %.2f\n", estado02, codigoCarta02, nomecidade02, populacao02);
     printf("Área: %.2f km²\nPIB: R$ %.2f bilhoes de reais\nNumero de pontos turisticos: %d\n", area02, pib02, npt02);
     printf("Densidade populacional: %.2f pessoas/km²\nPIB per capita: %.2f reais\n", dp2, ppc2);
     printf("Super Poder:%.2f\n", sp2);


      // Comparação entre os dados da primeira e segunda carta.

printf("###### Resultado da comparação entre as cartas ######\n");


     printf("População:%d\n", populacao > populacao02); // comparação entre população da primeira e segunda carta.
     printf("Area:%d\n", area > area02); // comparação da Area da primeira e segunda carta.
     printf("PIB:%d\n", pib > pib02); // comparação do PIB da primeira e segunda carta.
     printf("Numero de pontos turisticos:%d\n", npt > npt02); // comparação da quantidade de pontos turisticos da primeira e segunda carta.
     printf("Densidade populacional:%d\n", dp < dp2); // comparação da densidade populacional. (OBS: nesse caso o vencedor e o que tiver o menor valor).
     printf("PIB per capita:%d\n", ppc > ppc2); // comparação do PIB per capita da primeira e segunda carta.
     printf("Super Poder:%d\n", sp > sp2); // comparação do super poder da primeira e segunda carta.


     
     
       


     return 0;




}
