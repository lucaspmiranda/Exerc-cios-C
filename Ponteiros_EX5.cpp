#include <stdio.h>
#include <string.h>

int main()
{
    char str[50],letra,*p;
    int total=0;
    puts("Digite a frase (ate 50 letras):");
    gets(str);
    printf("Digite a letra a ser procurada: ");

    fflush(stdin);
    scanf("%c",&letra);
    fflush(stdin);


    p=str;
    do
    {
        if(*p==letra)
        {
            total++;
        }
        p++;
    }
    while (*p!='\0');
    printf("\nO total de vezes que %c apareceu na frase foi %d vezes!",letra,total);
    return 0;
}
