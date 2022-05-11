#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Please enter a value for n ";
	cin>>n;
	
	for(int i = 1; i <=n; i++){
		for(int j = 1; j<= 3*n-2; j++){
			if(i+j ==n+1 || j-i ==n-1 || i+j==3*n-1 ){
				cout<<"*";
			}else{
				cout<<"-";
			}
		}
		cout<<"\n";
	}
}

