#include <iostream>

using namespace std;

int main()
{
	int arr[100];

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	//arr[n] = arr[n - 1] + 1;

	for (int i = 0; i < n-1; i++)
	{
		int dif = arr[i + 1] - arr[i];

		for(int j = 1; j < dif ; j++)
		{
			cout << arr[i] + j << " ";
		}
	}
}






