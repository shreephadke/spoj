#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool isPalindrome (long long int k);

int main(void)
{
    bool inf;
    long long int t, k;
    cin >> t;
    while(t--)
    {
        inf = true;
        cin >> k;
        while(inf)
        {
            k++;
            if (isPalindrome(k) == true)
            {
                cout << k << endl;
                inf = false;
            }
        }
    }

    return 0;
}

bool isPalindrome (long long int k)
{
    string s1, s2;
    string str = to_string(k);
    long long int half = str.length()/2;
    if (str.length() % 2 == 0)
    {
        s1 = str.substr(0, half);
        s2 = str.substr(half, str.length());
    }
    else
    {
        s1 = str.substr(0, half);
        s2 = str.substr(half + 1, str.length());
    }

    reverse(s2.begin(), s2.end());

    if (s1.compare(s2) == 0)
    {
        return true;
    }
    return false;

}
