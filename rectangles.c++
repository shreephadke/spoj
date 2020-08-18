#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
    int t, count = 0;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++)
    {
        for(int j = i; j <= t; j++)
            if(i * j <= t)
                count++;
    }
    printf("%d\n", count);
    return 0;
}
