#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int x;
    cin >> x;
    stack<char> sta;

    string s = to_string(x);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '-')
        {
            sta.push((s[i]));
        }
    }

    while(!sta.empty())
    {
        cout << sta.top();
        sta.pop();
    }

    cout << endl;

    return 0;
}
