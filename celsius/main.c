#include <stdio.h>

#define INICIO      0       // Limite inferior da tabela
#define FIM          100   // Limite superior da tabela
#define INCR        5        // Incremento

int main(int argc, char **argv)
{
    float fahr, celsius;
    
    fahr = INICIO;
    
    printf("Converte Fahrenheit para Celsius de %3d  até %3d  Fahrenheit\n", INICIO, FIM);
    
    while(fahr <= FIM){
        celsius = (5.0/9.0)*(fahr - 32.0);
        printf("|%4.0f\t|%6.1f|\n", fahr, celsius);
        fahr = fahr + INCR;
    }
	return 0;
}
