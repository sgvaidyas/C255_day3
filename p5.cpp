#include <iostream>

using namespace std;


int main()
{
	int n, length, index;
	while (1)
	{
		cin >> n;
		length = 3 * n - 2;
		
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= length; j++)
			{
				index = i;
				if (j > (2 * n - 1)) index = index - (2 * n - 2);
				else if (j > n) index = 2 - index;

				if ((index + j) == n + 1) cout << "*";
				else cout << " ";
			}
			cout << "\n";
		}	
		cout << "\n";
	}
	return 0;
}

