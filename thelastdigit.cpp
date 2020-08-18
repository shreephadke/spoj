#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int a, b;
        cin >> a >> b;

        if (b == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            double arr [4] = {pow(a,4), pow(a,1), pow(a,2), pow(a,3)};
            cout << (int)(arr[b%4]) % 10 << endl;
        }
    }

    return 0;
}
