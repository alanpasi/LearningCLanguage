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
    
    printf("Testando...\n");
    printf("%4.0f \n", fahr);
    printf("%4d \n", fim);
    
    while(fahr <= fim){
        celsius = (5.0/9.0)*(fahr - 32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + incr;
    }
	return 0;
}
