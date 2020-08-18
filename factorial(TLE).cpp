#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{

    int iter, num;
    int counter = 0, exp = 1;

    // number of iterations
    scanf("%d", &iter);

    // loop over number of iterations; search for input
    for (int i = 0; i < iter; i++)
    {
        // take number as input
        scanf("%d", &num);
        counter = 0;
        // find how many exponents of 5 are less than number
        for (exp = 1; pow(5, exp) <= num; exp++);
        exp--;
        //printf("EXPONENT: %d\n", exp);

        for (int j = 1; j <= num; j++)
        {
            for (int k = 1; k <= exp; k++)
            {
                //printf("K: %d\n", k);
                if (j % (int)(pow(5, k)) == 0)
                {
                    counter++;
                }
            }
        }

        printf("%d\n", counter);


    }
}
