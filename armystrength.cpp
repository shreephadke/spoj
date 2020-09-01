#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int NG, NM, strength;
        vector <int> godzilla;
        vector <int> mecha;
        queue <int> g;
        queue <int> m;
        cout << endl;
        cin >> NG >> NM;
        for (int i = 0; i < NG; i++)
        {
            cin >> strength;
            godzilla.push_back(strength);
        }
        sort(godzilla.begin(), godzilla.end());
        for (int i = 0; i < godzilla.size(); i++)
        {
            g.push(godzilla[i]);
        }
        for (int i = 0; i < NM; i++)
        {
            cin >> strength;
            mecha.push_back(strength);
        }
        sort(mecha.begin(), mecha.end());
        for (int i = 0; i < mecha.size(); i++)
        {
            m.push(mecha[i]);
        }

        while (!(g.empty() || m.empty()))
        {
            if (g.front() < m.front())
                g.pop();
            else
                m.pop();
        }

        if (!g.empty())
            cout << "Godzilla" << endl;
        else if (!m.empty())
            cout << "MechaGodzilla" << endl;
    }

}
