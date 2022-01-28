#include <iostream>
#include <time.h>

using namespace std;

unsigned long recFib(unsigned int num)
{
    if (num <= 2)
        return 1;
    return recFib(num - 1) + recFib(num - 2);
}

int main()
{
    int pause;
    clock_t tStart = clock();

    unsigned int step = 50;
    cout << "Fib in " << step << "th step is: " << recFib(step) << endl;

    printf("Time taken: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
    cin >> pause;
}
