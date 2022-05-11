#include <iostream>
using namespace std;
int main()
{
	int n,i,j;
	int a[100];
	cout<<"Please enter a value for n ";
	cin>>n;
	
	cout<<"\n Enter the elements =\n";
	for(i=0;i<n;i++)
		cin>>a[i];
		
	int temp;
	//bubble sort
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	cout<<"\n sorted elements  = ";
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";
	
	
}
