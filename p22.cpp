#include <iostream>
using namespace std;
int main()
{
	int n,m,i,j,key;
	cout<<"Please enter a value for n ";
	cin>>n;
	int a[n];
	cout<<"\n Enter the elements of the first array =\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	
	//insertion sort
	for(i=1;i<n;i++)
	{
		key = a[i];
		j = i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1]=key;
	}
	
	cout<<"\n The duplicated numbers are\n";
	int lastNumber;
	lastNumber = a[0];
	int frequency = 1;
	for(i = 1; i < n; i++){
		if (a[i] != lastNumber){
			if (frequency > 1){
				cout << lastNumber << " repeated " << frequency << " times\n";
			}
			lastNumber = a[i];
			frequency = 1;
		}
		else{
			frequency ++;
		}
	}
	//in case last element is repeated
	if (frequency > 1){
			cout << lastNumber << " repeated " << frequency << " times\n";
	}
}

