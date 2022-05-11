#include<iostream>
using namespace std;

int main()
{	
	int n, count =0;
	while(true){

		cout<<"Please enter a value to be inserted ";
		cin>>n;
		int a[100];
		if(count == 0){
			a[0] = n;
			count++;
		}else{
			for(int i =0;i<=count; i++){
				if(i ==0 && n<a[i]){
					for(int j = count+1; j >0;j--){
						a[j] = a[j-1];
					}
					a[0] = n;
					break;
				}else if(i==count){
					a[i]=n;
				}else if(n>=a[i]&& n<a[i+1]){
					for(int j = count+2; j>=i ;j--){
						a[j+2] = a[j+1];
					}
					a[i+1] = n;
					break;
				}
				
			}
			count++;
		}
		for(int i = 0; i<count; i++){
			cout<<a[i]<<"\t";
		}
	
}
}

