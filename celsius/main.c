#include <stdio.h>
//#include<stdlib.h>

int main(int argc, char **argv)
{
    int inicio, fim, incr;
    float fahr, celsius;
    
    inicio = 0;
    fim = 100;
    incr = 5;
    
    fahr = inicio;
    
    printf("Converte Fahrenheit para Celsius de %3d  até %3d  Fahrenheit\n", inicio, fim);
    
    while(fahr <= fim){
        celsius = (5.0/9.0)*(fahr - 32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + incr;
    }
	return 0;
}
