/*The C Programming Language - page 37*/

#include <stdio.h>

#define     MAXLINHA 1000   /*tamanho máximo da linha*/

int main(int argc, char **argv)
{
    int tam;   /* tamanho corrente da linha*/
    int max;    /*tamanho máximo visto até agora*/
    char linha[MAXLINHA];
    char guarda[MAXLINHA];
    
    max = 0;
    while((tam = lelinha(linha, MAXLINHA))> 0)
        if(tam > max) {
            max = tam;
            copia(linha, guarda);
        }
    if(max > 0)     /*entrada tinha uma linha*/
        printf("%s", guarda);
	return 0;
}

lelinha(s, lim)    /* le a linha em s, retorna o tamanho*/
char s[];
int lim;
{
    int c, i;
    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if(c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return (i);
}

copia(s1, s2)       /*copia s1 em s2; assuma que cabe em s2*/
char s1[], s2[];
{
    int i;
    i = 0;
    while((s2[i] = s1[i]) != '\0')
        ++i;
}