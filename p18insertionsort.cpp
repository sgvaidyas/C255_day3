#include <iostream>
using namespace std;
int main()
{
	int n,i,j,key;
	cout<<"Please enter a value for n ";
	cin>>n;
	int a[n];
	cout<<"\n Enter the elements =\n";
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
	
	cout<<"\n Insertion sort elements =\n";
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";
}
	
	
	
	
	
	
	
	
