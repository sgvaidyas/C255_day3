#include <iostream>
using namespace std;
int main()
{
	int n,i;
	int a[100];
	cout<<"Please enter a value for n ";
	cin>>n;
	
	cout<<"\n Enter the elements =\n";
	for(i=0;i<n;i++)
		cin>>a[i];
		
	int temp=a[0];
	for(i=0;i<n-1;i++)
	{
		a[i] = a[i+1];
	}
	a[n-1]=temp;
	cout<<"\n element in the end  = ";
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";	
}

