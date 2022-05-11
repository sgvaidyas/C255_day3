#include <iostream>
#define array_size 100
using namespace std;
int main()
{
	unsigned int n = 0;
	int arr[array_size];
	// ======================== //
	// The solution starts here //
	// ======================== //
	bool running = true;
	unsigned int size = 0;
	while (running)
	{
		cout << "Menu: \n\n";
		cout << "1) Insert\n";
		cout << "2) Display\n";
		cout << "3) Quit\n";
		cout << "\nType option: \n";
		unsigned short int option;
		cin >> option;
		switch (option)
		{
		case 1:
		{
			cout << "\nInsert: \n";
			int item;
			bool inserted = false;
			cin >> item;
			for (unsigned int i = 0; i < size; i++)
			{
				if (item < arr[i])
				{
					int current = arr[i];
					arr[i] = item;
					
					inserted = true;
					for (unsigned int j = i + 1; j <= size; j++)
					{
						int aux = arr[j];
						arr[j] = current;
						current = aux;
					}
					break;
				}
			}
			if (!inserted)
				arr[size] = item;
			size++;			
		}
			break;
		case 2:
		{
			//Printing the array
			cout << "\nArray elements are: \n";
			for (unsigned int i = 0; i < size; i++)
			{
				cout << arr[i] << " ";
			}
			cout << "\n\n";
		}
			break;
		case 3:
			running = false;
			break;
		}
	}
} 
