#include<iostream>
using namespace std;

int main()
{
	int n, counter=1,temp;
	cout<<"Please enter a value for n ";
	cin>>n;
	int a[n];
	cout<<"\n Please enter the elements \n";
	for(int i = 0;i<n;i++){
		cin>>a[i];
	}
	
	for(int i =0; i<n;i++){
		for(int j = i+1;j<n; j++){
			if(a[j]<a[i]){
				temp = a[i];
				a[i]= a[j];
				a[j]= temp;
			}
		}
	}
	for(int i =0; i<n;i++){
		counter = 1;
		if(a[i]==a[i+1]){
			cout<<a[i]<<" is Repeated "<<endl;
			while(a[i]==a[i+1]){
				counter++;
				i++;			
			}
			cout<<counter<< " times"<<endl;
		}
	}
}

