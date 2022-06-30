#include <stdio.h>
#include <math.h>
#include <time.h>

unsigned int Iterativo(int n);


int main(){

    double start, stop, elapsed;
    int n;
    int x;
    int i, j, k;

    scanf ("%d", &n);

    start = (double) clock () / CLOCKS_PER_SEC;
    
    printf("%u\n", Iterativo(n));

    stop = (double) clock () / CLOCKS_PER_SEC;
    elapsed = stop - start;
    printf ("O tempo de execucao de fibonacci de %d foi de: %lf segundos\n", n, elapsed);
    
    return 0;
}

unsigned int Iterativo(int n) {
    unsigned int f3 = 1;
    unsigned int f2 = 1;
    unsigned int f1 = 0;

    if(n <= 1) return n;
    for (int i = 2; i <= n; i++) {
        f1 = f3 + floor(0.2*f2) + i;
        f2 = f3;
        f3 = f1;
        }
    return f1;
}
    
