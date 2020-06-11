#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>


int main(void) {

 char c;

 FILE *arq;

 arq = fopen("C:\\Users\\Tiago\\Desktop\\Iesb\\APCII\\Atividades06\\dados.txt", "r");

 if (arq == NULL)
{ 
       puts("erro ao abrir arquivo\n");

}

else {

       puts("o arquivo foi aberto");
 }
      printf("Escreva algo no arquivo");
      scanf("%s",&c);
      
      fprintf(arq,"[%s]",c);
  getchar();    
 fclose(arq);

 return 1;

 }
