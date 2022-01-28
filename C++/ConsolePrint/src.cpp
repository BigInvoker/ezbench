#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int pause;
    clock_t tStart = clock();

    int ti = 5000;
    int tj = 20;
    int p = ti * tj;
    int s = 0;
    for (int i = 0; i <= ti; i++)
    {
        for (int j = 0; j <= tj; j++)
        {
            cout << "" << (s * 100 / p);
        }
        s = s + tj;
    }
    printf("Time taken: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
    cin >> pause;
}
