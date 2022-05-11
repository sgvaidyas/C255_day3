#include<iostream>
using namespace std;

int main()
{
	int n, counter=0,temp,size = 1;
	cout<<"Please enter a value for n ";
	cin>>n;
	temp = n;
	while(temp/10>=1){
		size += 1;
		temp /=10;
	}

	int a[size];
	for(int i = 0; i<=size; i++){
		a[i] = n%10;
		n = n/10;
	}
	
	for(int i =0; i<size;i++){
		for(int j = i+1;j<size; j++){
			if(a[j]<a[i]){
				temp = a[i];
				a[i]= a[j];
				a[j]= temp;
			}
		}
	}
	for(int i =0; i<size;i++){

		if(a[i]==a[i+1]){
			while(a[i]==a[i+1]){
				i++;			
			}
			counter+=1;
		}
	

	}
	cout<<counter<<"\n";
		

}

