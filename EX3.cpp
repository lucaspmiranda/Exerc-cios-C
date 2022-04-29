#include<stdio.h>
#include<conio.h>
#include<string.h>


int funcao(int *maior, int *menor)
{
    int vet[10], i;

    for(i=0; i<10; i++)
    {
        printf("Digite o %d numero: ",i+1);
        scanf("%d",&vet[i]);
    }

    *maior = vet[0];
    *menor = vet[0];

    for(i=0; i<10; i++)
    {
        if(vet[i]>*maior)
            *maior=vet[i];

        if(vet[i]<*menor)
            *menor=vet[i];
    }
}

int main ()
{
    int x,y;

    funcao(&x,&y);

    printf("\n\nMaior: %d",x);
    printf("\nMenor: %d",y);


    return 0;
}
