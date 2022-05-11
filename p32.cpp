#include <iostream>
using namespace std;
int main()
{
	int i, counter;
	int a[8] = { 1,2,3,5,6,7,9,11};
	
	counter = 1;
	
	for (i = 0; i < 8; ++i)
	{
		if (a[i] != counter)			
		{										
			while (a[i] != counter)			
			{								
				cout <<"i = "<<i<<" a[i] = "<< a[i]<<" counter = "<<counter<<endl;
				++counter;
				
			}
			i--;
		}
		else
			++counter;
	}

}

