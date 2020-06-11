#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){

FILE *arq;

char nome[30];
char matricula[10];
arq= fopen("texto.txt", "w");
if (arq == NULL)  
  {
     printf("Erro na abertura do arquivo\n");
     return;
}

printf("matricula\n");
memset(matricula, '\0', sizeof(matricula));
scanf("%s",matricula);

while (strcmp("0", matricula)){
    fputs(matricula, arq);

    printf("nome\n");
    memset(nome, '\0', sizeof(nome));
    scanf("%s",nome);
    fputs(nome, arq);

    printf("matricula\n ");
    memset(matricula, '\0', sizeof(matricula));
    scanf("%s",matricula);   
}
fclose(arq);
arq=fopen("texto.txt","r");
while(fgets(matricula,10,arq)!=NULL){
    printf("%s", matricula); 
}

return 0;

}
