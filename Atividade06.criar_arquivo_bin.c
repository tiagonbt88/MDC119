#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>


int main() {


 FILE *arq;
 char c;

 arq = fopen("C:\\Users\\Tiago\\Desktop\\Iesb\\APCII\\Atividades06\\dados.bin", "wr");

if (arq == NULL)
{ 
       fprintf(stderr,"erro ao abrir arquivo\n");

}
  return 1;

while(fgetc(arq != EOF));
    if(feof(arq))
{

       puts("o arquivo foi está em modo leitura e escrita\n");
 }
 else{
 
      printf("O indicador de fim de arquivo (EOF) não está marcado. Ocorreu erro.\n");
  }
      
  getchar();
  
 fclose(arq);

 return 1;

 }
