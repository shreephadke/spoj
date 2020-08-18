#include <iostream>
#include <cstdio>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    float des, sum;
    bool found = false;
    float n;
    do
    {
        if (des == 0.00)
        {
            break;
        }
        found = false;
        n = 1;
        sum = 0;
        // take desired outcome input
        cin >> des;
        // loop until sum == num
        while (!found && des >= 0.01 && des <= 5.20)
        {
            // sum is a series from 1 to n (1/n+1)
            sum += 1/(n+1);
            if (sum > des)
            {
                cout << n << " card(s)" << endl;
                found = true;
                break;
            }
            n++;
        }

    }
    while (des >= 0.01 && des <= 5.20);

}
