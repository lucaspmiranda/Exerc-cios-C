#include <stdio.h>

int main()
{
    float vet[10],*vp[10],*p;
    int i;
    p=vet;
    for(i=0; i<10; i++)
    {
        printf("Digite o %d valor: ",i+1);
        scanf("%f",&vet[i]);
    }
    for(i=0; i<10; i++)
    {
        vp[i]=p;
        p++;
    }
    for(i=0; i<10; i++)
    {
        printf("\nEndereco: %p - Conteudo: %f",vp[i],*vp[i]);
    }
    return 0;
}
