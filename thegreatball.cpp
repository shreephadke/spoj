#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        vector<int> enter;
        vector<int> exit;
        vector<int> combo;
        int N;
        int count = 0, max = 0;
        cin >> N;
        while (N--)
        {
            int entryTime, exitTime;
            cin >> entryTime >> exitTime;
            enter.push_back(entryTime);
            exit.push_back(exitTime);
            combo.push_back(entryTime);
            combo.push_back(exitTime);
        }
        sort(combo.begin(), combo.end());
        for (int i = 0; i < combo.size(); i++)
        {
            cout << "Element: " << combo[i];
            if (find(enter.begin(), enter.end(), combo[i]) != enter.end())
            {
                count++;
                cout << "Count: " << count << endl;
            }
            else if (find(exit.begin(), exit.end(), combo[i]) != exit.end())
            {
                count--;
                cout << "Count: " << count << endl;
            }
            if (count > max)
                max = count;
            cout << "Max: " << max << endl;
        }

        cout << max << endl;

    }

    return 0;
}
