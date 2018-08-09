#include <stdio.h>

int main(int argc, char **argv)
{
    int c, i, nbranco, noutro;
    int ndigito[10];
    
    nbranco = noutro = 0;
    for(i = 0; i <10; ++i)
        ndigito[i] = 0;
    while((c = getchar()) != EOF)
        if(c >= '0' && c <= '9')
            ++ndigito[c - '0'];
        else if(c == ' ' || c == '\n' || c =='\t')
                    ++nbranco;
        else
            ++noutro;
    printf("\ndigitos = ");
    for(i = 0; i < 10; ++i)
        printf(" %d", ndigito[i]);
    printf("\nespaço branco = %d, outro = %d\n", nbranco, noutro);
	return 0;
}
