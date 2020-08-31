#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int j = 1; j <= t; j++)
    {
        int num, friends = 0;
        vector<int> v;
        cin >> num >> friends;
        for (int i = 0; i < friends; i++)
        {
            int count;
            cin >> count;
            v.push_back(count);
        }
        sort(v.begin(), v.end(), greater<int>());
        int sum = 0, fin = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if (sum >= num)
                break;
            sum+=v[i];
            fin++;
        }
        cout << "Scenario #" << j << ":" << endl;
        if (sum < num)
            cout << "impossible" << endl;
        else
            cout << fin << endl;
    }
}
