#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>
#include <map>
#include <string>

using namespace std;

int main(void)
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        stack <char> s;
        string expr;
        cin >> expr;

        for (int j = 0; j < expr.length(); j++)
        {
            if (expr[j] >= 'a' && expr[j] <= 'z')
            {
                cout << expr[j];
                continue;
            }
            else if (expr[j] == '(')
            {
                continue;
            }
            else if (expr[j] == ')')
            {
                cout << s.top();
                s.pop();
                continue;
            }
            else
            {
                s.push(expr[j]);
            }
        }
        cout << endl;
    }

    return 0;

}
