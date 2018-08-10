// https://youtu.be/9huA-RrtsQE
//
#include <stdio.h>

int power(int m, int n);

int main(int argc, char **argv)
{
    int i;
    
    for(i = 0; i < 10; ++i) {
        printf("%2d %3d %6d\n", i, pot(2, i), pot(-3, i));
//        printf("%2d %3d %6d\n", i, power(2, i), power(-3, i));
    }
	return 0;
}

pot(x, n)
int x, n;
{
    int p;
    for(p = 1; n > 0; --n)
        p = p * x;
    return(p);
}

/*
int power(int base, int n) {
    int i, p;
    
    p = 1;
    
    for(i = 1; i <= n; ++i)
        p = p * base;
    return p;
}*/