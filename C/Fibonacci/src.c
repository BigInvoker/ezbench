#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned long recFib(unsigned int num)
{
    if (num <= 2)
        return 1;
    return recFib(num - 1) + recFib(num - 2);
}

int main()
{
    unsigned int step = 50;
    int pause;
    clock_t tStart = clock();
    printf("num is %d", recFib(step));
    printf(" Execution time: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
    scanf("%d", &pause);

    return 0;
}
