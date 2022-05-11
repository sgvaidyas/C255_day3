#include <iostream>

using namespace std;

int main()
{
	int n;
	int pivot = 0;
	int tmp = 1;
	bool swap = false;
	int offset = 0;
	int count = 1;
	int max_count = 3;

	cin >> n;
	pivot = n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= pivot + offset; j++)
		{
			if (i + j - offset == n + 1 && !swap)
				cout << "*";
			else if (i + offset == j && swap)
				cout << "*";
			else
				cout << "-";

			if (j == pivot + offset && count < max_count)
			{
				count++;
				swap = !swap;
				offset += n;
				j = 1 + offset;
			}
		}
		cout << "\n";
		offset = 0;
		swap = false;
		count = 1;
	}
}

