#include <stdio.h>

int main()
{
    int vet[10],i,*vp[10],*p;

    p=vet;

    for(i=0;i<10;i++)
    {
       printf("Digite o %d valor: ",i+1);
       scanf("%d",&vet[i]);
    }
    for(i=0;i<10;i++)
    {
        vp[i]=p;
        p++;
    }
    for(i=0;i<10;i++)
    {
       printf("\n%d",*vp[i]);
    }
    return 0;
}
