#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void)
{
    bool a = true;
    int n = 0, sum = 0, bal = 0, diff = 0, counter = -1, s = 0;
    int arr [10001], sumArr[10001];
    while ( n != -1)
    {
        a = true;
        sum = 0;
        scanf("%d", &n);
        if (n == -1)
        {
            break;
        }
        counter++;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
            if (i == n-1)
            {
                bal = sum/n;
                if (sum % n != 0)
                {
                    sumArr[counter] = -1;
                    //printf("counter is %d\n", counter);
                    //printf("sumcounter0 is %d\n", sumArr[counter] );
                    a = false;
                }
            }
        }
        if (a)
        {
            for (int i = 0; i < n; i++)
            {
                diff = bal - arr[i];
                if(diff > 0)
                {
                    sumArr[counter] += diff;
                }
            }
        }

    }

    for (int i = 0; i <= counter; i++)
    {
        printf("%d\n", sumArr[i]);

    }


    return 0;

}

