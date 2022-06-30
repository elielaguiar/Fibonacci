#include <stdio.h>
#include <math.h>
#include <time.h>

int fib(int n);
unsigned int fiboR(unsigned int n);

int main(){

    double start, stop, elapsed;
    int n;
    int x;
    int i, j, k;

    scanf ("%d", &n);

    start = (double) clock () / CLOCKS_PER_SEC;

    printf("%u\n", fiboR(n));
  
  
  stop = (double) clock () / CLOCKS_PER_SEC;
  elapsed = stop - start;
  printf ("O tempo fazendo o fibonacci  de %d foi de: %lf segundos\n", n, elapsed);
    

    return 0;
}

unsigned int fiboR(unsigned int n){
    if(n == 0 || n == 1)
        return n;
    return fiboR(n - 1) + floor(0.2 * fiboR(n - 2)) + n;
    }

