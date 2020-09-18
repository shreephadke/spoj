#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int x;
    int count = 0;
    cin >> x;
    stack<char> sta;

    string s = to_string(x);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '-')
        {
            sta.push((s[i]));
        }
        else
        {
            count = 1;
        }
    }

    while(!sta.empty())
    {
        if (count == 1)
        {
            cout << "-";
            count = 0;
        }
        cout << sta.top();
        sta.pop();
    }

    cout << endl;

    return 0;
}
