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
	
	cout<<"\n The minimum element is: \n";
	int min, max = a[0];
	for(i=0;i<n;i++)
		if (a[i] < min) min = a[i];
		if (a[i] > max) max = a[i];
	cout<<min;
	
	//bubble-sort elements;
	bool rearrange = true;
	int temp;
	while (rearrange){
		rearrange = false;
		for (i=0; i<n-1; i++){
			if (a[i] > a[i + 1]){
				rearrange = true;
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
	cout<<"\n The elements in sorted = \n";
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";
	
	cout<<"\n The middle element(s) are = \n";
	if (n % 2 == 0){//even
		if (a[n/2 - 1] != a[n/2]) cout<<a[n/2 - 1]<<" and "<<a[n/2];
		else cout<<a[n/2];
		}
	else cout<<a[n/2];
}

