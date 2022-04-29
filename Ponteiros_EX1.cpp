#include <stdio.h>

int main()
{
    int a,b,c,d;
    int *e, *f, *g, *h;

    e=&a;
    f=&b;
    g=&c;
    h=&d;

    printf("Digite um valor para a: ");
    scanf("%d",e);

    *f=100;

    printf("Digite um valor para c: ");
    scanf("%d",g);

    *h=1000;

    printf("\nValor de a: %d e valor de c: %d",a,c);
    printf("\nValor de b: %d e valor de d: %d",b,d);
    printf("\n\nEndereco de e: %p",&e);
    printf("\nEndereco de f: %p",&f);
    printf("\nEndereco de g: %p",&g);
    printf("\nEndereco de h: %p",&h);
    printf("\n\nEndereco apontado por e: %p",e);
    printf("\nEndereco apontado por f: %p",f);
    printf("\nEndereco apontado por g: %p",g);
    printf("\nEndereco apontado por h: %p",h);
    printf("\n\nEndereco de a: %p",&a);
    printf("\nEndereco de b: %p",&b);
    printf("\nEndereco de c: %p",&c);
    printf("\nEndereco de d: %p",&d);



    return 0;
}
