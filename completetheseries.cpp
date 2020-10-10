#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long third, third_last, sum;
        cin >> third >> third_last >> sum;
        long long n = (2*(sum))/(third + third_last);
        cout << n << endl;
        long long diff = (third_last-third)/(n-5);
        //cout << "difference is: " << diff << endl;
        long long first = third-(2*diff);
        for (int i = 0; i < n; i++)
        {
            if (i != (n-1))
                cout << first << " ";
            else
                cout << first << endl;
            first += diff;
        }
    }
    return 0;
}
