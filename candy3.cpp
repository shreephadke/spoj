#include <iostream>

using namespace std;

int main()
{
  int t;
  long long int num;

  cin>>t;

  while(t--)
  {

    cin >> num;
    long long int i, j, sum = 0;
    i = num;

    while(i--)
    {
      cin >> j;
      sum = (sum + j) % num;
    }

    if(sum == 0)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
}
