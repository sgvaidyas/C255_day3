#include <iostream>
using namespace std;
int main()
{
	int n,i,min,max;
	int a[100];
	cout<<"Please enter a value for n ";
	cin>>n;
	
	cout<<"\n Enter the elements =\n";
	for(i=0;i<n;i++)
		cin>>a[i];
		
	min = a[0];
	max = a[0];
	
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
			min = a[i];
		if(a[i]>max)
			max = a[i];
	}
	
	cout<<"\n The entered elements are = \n";
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";	
		
	cout<<"\n Max val = "<<max<<endl;
	cout<<"\n Min val = "<<min<<endl;
		
}
