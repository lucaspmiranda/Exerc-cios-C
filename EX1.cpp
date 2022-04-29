#include<stdio.h>

void maxmin(int a, int b, int c, int *maior, int *menor)
{
    if(a>b)
        if(b>c)
    {
        *maior=1;
        *menor=3;
    }
    else
        if(a>c)
        {
            *maior=1;
            *menor=2;
        }
        else
        {
            *maior=3;
            *menor=2;
        }
    else
        if(a>c)
    {
        *maior=2;
        *menor=3;
    }
    else
        if(b>c)
        {
            *maior=2;
            *menor=1;
        }
        else
        {
            *maior=3;
            *menor=1;
        }

}

int main ()
{
    int a,b,c,maior,menor;

    printf("Digite um numero: ");
    scanf("%d",&a);
    printf("\nDigite um numero: ");
    scanf("%d",&b);
    printf("\nDigite um numero: ");
    scanf("%d",&c);

    maxmin(a,b,c,&maior,&menor);

    printf("\nA posicao do maior numero = %d e a posicao do menor numero = %d", maior, menor);

    return 0;
}
