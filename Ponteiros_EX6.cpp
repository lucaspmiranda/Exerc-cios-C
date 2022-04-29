#include <stdio.h>
#include <string.h>

int main()
{
    char str1[40], str2[40],*p1,*p2,str3[40];
    int i;
    p1=str1;
    p2=str2;
    puts("Digite uma frase (ate 40 letras)");
    gets(str1);
    do
    {
        p1++;
    }
    while (*p1!='\0');
    do
    {
        p1--;
        *p2=*p1;
        p2++;
    }
    while(p1!=str1);
    *p2='\0';
    puts(str1);
    puts(str2);

    return 0;

}
