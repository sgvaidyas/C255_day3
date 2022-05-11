#include <iostream>
using namespace std;
int main()
{
	int n,i;
	cout<<"Please enter a value for n ";
	cin>>n;
	int a[n];
	cout<<"\n Enter the elements =\n";
	for(i=0;i<n;i++)
		cin>>a[i];
		
	cout<<"\n The entered elements are = \n";
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";		
}
