#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    vector<long int> freq;
    freq.push_back(4);
    freq.push_back(3);
    freq.push_back(5);
    freq.push_back(4);
    freq.push_back(3);

    vector<long int> v;
    for (long int i = 1; i <= freq[0]; i++)
    {
        while(freq[i]--)
        {
            v.push_back(i);
        }
    }

    long int count = 0;

    for (long int i = 0; i < v.size() - 1; i++)
    {
        if (abs(v[i] - v[i+1]) <= 1)
            count++;
    }

    if (v.size() % 2 == 0)
    {
        count/=2;
        count++;
    }
    else
        count/=2;

    cout << count << endl;
}
