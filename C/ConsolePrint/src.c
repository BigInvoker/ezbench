#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
                    int r = s * 100 / p;
                    printf("%d \n", r);
                }
                s = s + tj;
            }

            printf("Execution time: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
            scanf("%d", &pause); 
            
    return 0;
}
