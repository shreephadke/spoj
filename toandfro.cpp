#include <cstdio>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    int numCols;

    do
    {
        cin >> numCols;

        if (numCols != 0)
        {
            string message = "";
            string fin;
            cin >> message;
            int numRows = 1;

            for (int i = 0; i < message.size(); i+=numCols)
            {
                if (numRows % 2 == 0)
                {
                    reverse(message.begin() + i, message.begin() + i + numCols);
                }
                numRows++;
            }

            for (int i = 0; i < numCols; i++)
            {
                for (int j = i; j < message.size(); j+=numCols)
                {
                    fin += message[j];
                }

            }

            cout << fin << endl;

        }
    }
    while (numCols != 0);

    return 0;

}
