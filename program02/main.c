#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float bhaskara(float a, float b, float c);

int main() {
	printf("Hello World! \n");
    
    bhaskara(1,2,3);
    
	return 0;
}

float bhaskara(float a, float b, float c) {

	float x1_real, x1_imag, x2_real, x2_imag, delta;
 
	if (a == 0)
		printf("Não é uma equação do segundo grau, pois a = 0\n");

	else {
		delta  = (b*b)-4*a*c;
		if (delta < 0) {
			delta = delta * (-1);
			x1_real = -b/(2*a);
			x1_imag = sqrt(delta)/(2*a);

			x2_real = -b/(2*a);
			x2_imag = -sqrt(delta)/(2*a);

			printf("x1 = %.4f +%.4fi \n", x1_real, x1_imag);
			printf("x2 = %.4f %.4fi \n", x2_real, x2_imag);

		}
			else {
				x1_real = (-b + sqrt(delta))/2*a;
				x2_real = (-b - sqrt(delta))/2*a;
				printf("x1 = %.4f \n", x1_real);
				printf("x2 = %.4f \n", x2_real);
			}

	} // end else
		
} // end bhaskara