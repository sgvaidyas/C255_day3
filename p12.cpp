#include <iostream>
using namespace std;
int main()
{
    //11 22 33 44 55 --- 22 33 44 55 11
    //33 22
	int n,i,j;
	int a[100];
	cout<<"Please enter a value for n ";
	cin>>n;

	cout<<"\n Enter the elements =\n";
	for(i=0;i<n;i++)
		cin>>a[i];

	int temp = a[n-1];
	//bubble sort
	for(i=n-1;i>0;i--){
        a[i] = a[i-1];
	}
	a[0] = temp;
	cout<<"\n sorted elements  = ";
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";

}

