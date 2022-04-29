#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "portuguese");

    int*pon_int; float *pon_float; char *pon_char;
    int cont, i_int; float i_float; char i_char;

    printf("\nDigite a quantidade de inteiros que deseja registrar: ");
    scanf("%d", &i_int);

    pon_int = (int *) malloc(i_int * sizeof(int));

    for (cont = 0; cont < i_int; cont++)
    {
        printf("\nDigite o %d° numero inteiro: ", cont+1);
        scanf("%d",&pon_int[cont]);
    }

    printf("\nRegistro:\n");

    for (cont = 0;cont < i_int; cont++)
    {
        printf("%d°: %d\n",cont+1, pon_int[cont]);
    }

    free(pon_int);

    printf("\nDigite a quantidade de reais que deseja registrar: ");
    scanf("%f", &i_float);

    pon_float = (float *) malloc(i_float * sizeof(float));

    for (cont = 0; cont < i_float; cont++)
    {
        printf("\nDigite o %d° numero real: ", cont+1);
        scanf("%f", &pon_float[cont]);
    }

    printf("\nRegistro:\n");

    for (cont = 0;cont < i_float; cont++)
    {
        printf("%d°: %.2f\n",cont+1, pon_float[cont]);
    }

    free(pon_float);

    printf("\nDigite o tamanho da frase que deseja registrar: ");
    scanf("%d", &i_char);
    getchar();

    pon_char = (char *) malloc(i_char+1 * sizeof(char));

    printf("\nDigite a frase: ");
    gets(pon_char);

    printf("\nRegistro: \n");

    printf("%s",pon_char);

    free(pon_char);

    return 0;
}
