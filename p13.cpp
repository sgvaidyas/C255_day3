#include <iostream>
#define max 10
using namespace std;
int main()
{
	int i, n, j, temp, choice;
	int a[10] = {};
	cout << "What is your choice? 1 to display, 2 to insert: ";

	cin >> choice;

	if (choice == 1)
	{
		cout << "The elements are: ";
		for (i = 0; i < 10; ++i)
		{
			cout << a[i] << "\t";
		}
	}

	if (choice == 2)
	{
		temp = a[10 - 1];

		for (i = 10 - 1; i > 0; i--)
		{
			a[i] = a[i - 1];
		}
		cout << "What number to insert: ";
		cin >> a[0];
		for (i = 0; i < 10 - 1; i++)
		{
			for (j = 0; j < 10 - 1 - i; j++)
			{
				if (a[j] > a[j + 1])
				{
					temp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = temp;
				}
			}
		}
	}

	cout << "The current elements are: ";
	for (i = 0; i < 10; ++i)
	{
		cout << a[i] << "\t";
	}
	
}
