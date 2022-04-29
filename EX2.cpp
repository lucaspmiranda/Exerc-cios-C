#include <stdio.h>


int troca(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}


int main()
{
    int a, b;

    printf("\nDigite um numero = ");
    scanf("%d",&a);
    printf("\nDigite um segundo numero = ");
    scanf("%d",&b);

    troca(&a,&b);

    printf("\nNumeros invertidos => a: %d - b: %d", a, b);

    return 0;
}
