/* trabalho de programação 1 - Pedro Henrique Lopes*/

#include<stdio.h>
#include<stdlib.h>

#define l 24
#define c 7

int main(){
int i,j;
float cont=0,tempMed=0,tempMin=9999,tempdif[c]={0},tempMax=0;

float temperatura[l][c] = {{46,44,45,49,59,46,43},{49,43,42,56,59,48,47},{63,42,48,58,59,45,48},{46,48,49,59,59,49,49},{48,49,56,59,59,51,51},{45,70,57,49,59,49,59},{44,41,45,49,52,46,63},{46,44,45,49,59,46,43},{49,43,42,56,59,48,47},{63,42,48,58,59,45,48},{46,48,49,59,59,49,49},{48,49,56,59,59,51,51},{45,70,57,49,59,49,59},{44,41,45,49,52,46,63},{46,44,45,49,59,46,43},{49,43,42,56,59,48,47},{63,42,48,58,59,45,48},{46,48,49,59,59,49,49},{48,49,56,59,59,51,51},{45,70,57,49,59,49,59},{44,41,45,49,52,46,63},{48,49,56,59,59,51,51},{43,44,44,45,46,46,47},{46,44,45,49,59,46,43}};
float tempServMedia[c]={0};

system("clear"); // limpa a tela

printf("******** TABELA DE TEMPERATURAS *******\n\n");
// imprimindo a matriz


printf("HORA\tSERV0\tSERV1\tSERV2\tSERV3\tSERV4\tSERV5\tSERV6\n");

for(i=0;i<l;i++){
  printf(" %dh:\t",i);
  for(j=0;j<c;j++){
    printf(" %.1f\t",temperatura[i][j]);
  }
  printf("\n");
}
printf("\n\n");

printf("******** CALCULO DE TEMPERATURAS *******\n\n");
// Seu código aqui.
 
 for(int i=0;i<l;i++){
    printf("%d:\n",i);
    for(j=0;j<c;j++){
      if(temperatura[i][j] > tempMax) tempMax = temperatura[i][j]; 
      else if(temperatura[i][j] < tempMin) tempMin = temperatura[i][j];
      cont += temperatura[i][j]; 
    }
      tempMed = cont /c;
    printf("Media: %.1f, Maxima: %.1f, Minima: %.1f\n",tempMed,tempMax,tempMin);
    printf("\n");
    cont = 0 ,tempMin = tempMax ,tempMax = 0;

  }



for (i=0;i<l;i++){
  for(j=0;j<c;j++) tempServMedia[j]+= temperatura[i][j];
}
for(j=0;j<c;j++) tempServMedia[j] /= l;
printf("******** TEMPERATURA MÉDIA DOS SERVIDORES *******\n\n");
// Seu código aqui. 
// Lembre de usar o vetor tempServMedia
for(j=0;j<c;j++)
 printf("\nTemperatura média do %d: %.1f\n",j,tempServMedia[j]);

printf("********TABELA DE TEMPERATURAS C/ TEMPS ACIMA DA MEDIA*******\n\n");
// Seu código aqui. 
/* Você deve imprimir a tabela da mesma forma que eu fiz lá em cima. 
Só que dessa vez se uma temperatura de servidor estiver acima da média dele
você deve imprimir um asterisco (*) ao lado dela */
printf("HORA\tSERV0\tSERV1\tSERV2\tSERV3\tSERV4\tSERV5\tSERV6\n");

for(i=0;i<l;i++){
  printf(" %dh:\t",i);
  for(j=0;j<c;j++){
    if(temperatura[i][j]>tempServMedia[j]) 
   
    printf("*");
   
    if(temperatura[i][j]>=(tempServMedia[j]+3)) 
   
    printf("*");
   
    printf(" %.1f\t",temperatura[i][j]);
  }
  printf("\n");
}
printf("\n\n");
      
return 0;
}