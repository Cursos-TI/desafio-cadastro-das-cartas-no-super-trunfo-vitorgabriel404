#include <stdio.h>
int main(){
char Estado1;
printf("\n Super Trunfo \n");
char CodigoDaCarta1[6];
char Cidade1[85];
float Area1;
float PIB1;
int PontosTuristicos1;

printf("\n Registro Carta 1 \n");

printf("Digite a letra do Estado da carta 1:\n");
scanf(" %c", &Estado1);

printf("Digite o Codigo da Carta 1:\n");
scanf("%6s", CodigoDaCarta1);

printf("Digite a Cidade:\n");
scanf("%84s", Cidade1);

printf("Digite a Area em km²:\n");
scanf("%f", &Area1);

printf("Digite o PIB:\n");
scanf("%f", &PIB1);

printf("Quantidade de Pontos Turisticos:\n");
scanf("%d", &PontosTuristicos1);

char Estado2;
char CodigoDaCarta2[7];
char Cidade2[81];
float Area2;
float PIB2;
int PontosTuristicos2;

printf("\n Registro Carta 2\n");

printf("Digite a letra do Estado da Carta 2:\n");
scanf(" %c", &Estado2);

printf("Digite o Codigo Da Carta 2:\n");
scanf("%6s", CodigoDaCarta2);

printf("Digite a Cidade:\n");
scanf("%80s", Cidade2);

printf("Digite a Area:\n");
scanf("%f", &Area2);

printf("Digite o PIB:\n");
scanf("%f", &PIB2);

printf("Quantidade de Pontos Turisticos:\n");
scanf("%d", &PontosTuristicos2);

return 0;


}