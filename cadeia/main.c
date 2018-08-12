#include <stdio.h>
#include<string.h>

int main(int argc, char **argv)
{
    int i;
    char cadeiadecaracteres[] = "ABCDE";
    
    printf("\nComprimento da cadeia de caracteres é: %ld\n", strlen(cadeiadecaracteres));
    for(i = 0; i < strlen(cadeiadecaracteres); ++i) {
        printf("%d\n", cadeiadecaracteres[i]);
    }
	return 0;
}
