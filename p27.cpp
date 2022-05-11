#include <iostream>

using namespace std;

int main()
{
	int vec[10];
	long long n;
	int count = 0;

	cin >> n;

	for (int i = 0; i < 10; i++)
		vec[i] = 0;

	while (n)
	{
		vec[n % 10]++;
		n /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		if (vec[i] > 1)
			count++;
	}

	cout << count;
}

