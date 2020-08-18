#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main()
{
	int num;
    bool zeros = false;
	vector <int> v;

    // number of trucks input loop
	while (!zeros)
	{
		int order;
        cin >> num;
        if (num == 0)
        {
            zeros = true;
            break;

        }
		v.clear();
        // iterate over all order of trucks
		while (num--)
        {
			cin >> order;
			v.push_back(order);
		}

		stack <int> s;
		int i = 0, actual = 1;

        // iterating over vector
		while (i < v.size())
		{
            //
			while (!s.empty() && s.top() == actual) {
				s.pop();
                actual++;

			}

            // if element i is not equal to (1....actual....n), push onto stack, else increment actual
			if (v[i] != actual)
				s.push(v[i]);
			else if (v[i] == actual)
                actual++;
			i++;
		}

        // while the stack isn't empty and the top of it has the same value and the 'actual' value, move on to the next value since it could have been inserted back properly
		while (!s.empty() && s.top()==actual) {
			s.pop();
            actual++;
		}

        // normalize actual to 0....n scale
		if (actual - 1 == v.size())
            cout << "yes" << endl;
		else
            cout << "no" << endl;
	}

	return 0;
}
