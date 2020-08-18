#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(void)
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long prod = 0;
        int n;
        scanf("%d", &n);
        int a[n], b[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &b[i]);
        }


        sort(a, a+n);
        sort(b, b+n);


        for (int i = 0; i < n; i++)
        {
            prod += a[i]*b[i];
        }

        printf("%ld\n", prod);

    }

    return 0;

}
