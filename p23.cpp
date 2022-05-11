#include <iostream>
using namespace std;
int main()
{
	int na, nb, nc, i, j, start;
	cout<<"Please enter a length for a ";
	cin>> na;
	int a[na];
	cout<<"\n Enter the elements for a = ";
	for(i=0; i < na; i++) cin>>a[i];
		
	int store[na] = {0};
	bool skip[na] = {0};
	start = 0;
		
	for (i = 0; i < na; i++)
	{
		for (j = i; j < na; j++)
		{
			if (a[j] == a[i] && skip[j] == 0)
			{
				store[i] ++;
				skip[j] = 1;
			}
		}
	}
	
	for (i = 0; i < na; i++){
		if (store[i] > 1)
		{
			cout << "\n" << a[i] <<" appears " << store[i] << " times.";
		}
			
	}
	
	//cout<<"\nStored values \n";
	//for(i = 0;i < na; i++) cout << store[i] << "\t";
		
}

