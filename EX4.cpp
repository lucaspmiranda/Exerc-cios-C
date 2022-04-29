#include<stdio.h>

void maxmin(int d, int minutos, int *horacorrente, int *mincorrente)
{
    printf("Quantos minutos se passaram desde a meia-noite: ");
    scanf("%d",&d);

    d=*mincorrente;

    minutos=120;

    *horacorrente= minutos + *mincorrente;
}

int main ()
{
    int a,b,c, e;

    maxmin(e, a, &b, &c);

    printf("\nA hora corrente: ", b);

    return 0;
}
