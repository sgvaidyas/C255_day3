#include <iostream>
using namespace std;
int main()
{
	int n1,n2,i;
	cout<<"Please enter no of ele for array 1 =  ";
	cin>>n1;
	int a[n1];
	
	
	cout<<"\n Enter the elements (Array a) =\n";
	for(i=0;i<n1;i++)
		cin>>a[i];
		
	cout<<"Please enter no of ele for array 2 =  ";
	cin>>n2;
	int b[n2];
	
	
	cout<<"\n Enter the elements (Array b) =\n";
	for(i=0;i<n2;i++)
		cin>>b[i];
		
	int c[n1+n2];
	
	for(i=0;i<n1+n2;i++)
	{
		c[i] = (i<n1)?a[i] : b[i-n1];
	}
		
		
	cout<<"\n Enter the elements (Array C) =\n";
	for(i=0;i<n1+n2;i++)
		cout<<c[i]<<"\t";	
		
}
		
		
		
		
		
		
		
		
		
