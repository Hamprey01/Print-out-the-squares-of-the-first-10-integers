#include <stdio.h>
#include <stdlib.h>

int sqr(int i)
{
    return (i * i);
}

int main() {
    int i, n;

    for(i = 1; i < 11; i++){
          n = sqr(i);
        printf("the square of %d is %d", i,n);

        printf("\n");

    }

    return 0;
}
