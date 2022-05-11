#include<iostream>
using namespace std;
	
int main(){
	int n,i,j;
	cout<<"Please enter a value for n ";
	cin>>n;
	int a[n];
	cout<<"\n Enter the elements =\n";
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	int counter = 0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[j] == a[i]){
				counter++;
			}
		}
	}
	cout<<"Number of repeated: " << counter << endl;
}
