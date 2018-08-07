#include <stdio.h>

int main(int argc, char **argv)
{
	int c;
    while((c = getchar()) != 32) {
        putchar(c);
        //printf("\n%d", c);
        c = getchar();
    }
	return 0;
}
