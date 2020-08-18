#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
	int t, len, i, j, counter;
	bool increment, resize;
	char arr[1000005];

    // test case input
	cin >> t;
	while (t--)
	{
        counter = 0;
        // store input in character array
		cin >> arr;
		len = strlen(arr);

		// false = left half, true = right half
		increment = false;
		j = (len+1)/2;

		// inverted onion, going inside out
		for (i = len/2 - 1; i >= 0; i--)
		{
			// if left element is less than the right element, increment the left side (12349000 --> 12355321)
			if (arr[i] < arr[j])
			{
				increment = false;
				break;
			}

			// if left element is greater than the right element, increment the right side
			if (arr[i] > arr[j])
			{
				increment = true;
				break;
			}
			j++;
		}
        // increment left half
		if (!increment)
		{
			resize = true;
			i = (len - 1)/2; // len = 2 for 12345
			while (i >= 0 && resize)
			{
                //12345 --> 12445
				arr[i]++;

                // if 9 is incremented to :, set it back to 0 and set resize to be true
				if (arr[i]==':')
				{
					arr[i] = '0';
					resize = true;
				}
				else
                {
					resize = false;
                }
				i--;
                //cout << arr << endl;
			}

            // if all 9s, return 100...n....001
			if (resize)
			{
				cout << '1';
				for (j=0; j<len-1; j++)
				{
                    cout << '0';
				}
                cout << '1' << endl;
				counter = 1;
			}
		}
        if (counter != 1)
        {
    		for (int x = 0; x < len/2; x++)
    			arr[len - x - 1] = arr[x];
    		cout << arr << endl;
        }
	}

	return 0;
}
