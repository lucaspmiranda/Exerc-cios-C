#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "H_soldados.h"

int main()
{
    Lista *aLista=criaLista();
    char nomes[50],opt;
    srand(time(NULL));
    do {
    printf("\n---LISTA DE SORTEIO DE SOLDADOS--\n");
    printf("\n1 - CADASTRO DE SOLDADOS");
    printf("\n2 - MOSTRAR LISTA DE SOLDADOS");
    printf("\n3 - SORTEAR SOLDADO");
    printf("\n4 - FINALIZAR");
    printf("\nEscolha uma opcao: ");
    opt=getchar();
    fflush(stdin);
    switch(opt)
       {
       case '1':{
          printf("\nDigite o nome do soldado: ");
          gets(nomes);
          if(strcmp(nomes,"")!=0)
          {
              aLista=insereLista(aLista,nomes);
              printf("\n\n ========= Soldado %s inserido.\n",aLista->soldado);
          }
          else
          {
              printf("NOME EM BRANCO - NAO INSERIDO\n");
          }
          break;
       }
       case '2':
       {
          imprimeLista(aLista);
          break;
       }
       case '3':
       {
           sortear(aLista);
           break;
       }
       case '4':
        {
            printf("\n\n-------FIM!--------\n\n");
            break;
        }
       break;
       default:
       {
           printf("\nOPCAO INVALIDA");
        }
       }
    } while(opt!='4');
    liberaLista(aLista);
return 0;
}
