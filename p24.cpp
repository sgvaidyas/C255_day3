#include<iostream>
using namespace std;
bool isDuplicateInArray(int num, int* p, int n);
	
int main(){
	
	int n, i,j, current, counter, dupCounter = 0;
	cout<< "Enter n ";
	cin>>n;
	int arr[n], arr2[n-1];
	int* p = arr2;
	
	cout<<"\n Enter arr elements = ";
	for(i=0;i<n;i++)
		cin>>arr[i];

	for(i = 0; i < n; i++){
		counter = 0;
		current = arr[i];
		for(j = 0; j< n;j++){
			if(current == arr[j])
				counter++;
		}
		if(counter > 1 && !isDuplicateInArray(current, p, n-1) ){
			cout<< "Number " << current << " is present " << counter << " times\n";
			arr2[dupCounter] = current;
			dupCounter++;
		}					
	}
}

bool isDuplicateInArray(int num, int* p, int n){
	for(int i = 0; i < n; i++){
		if(num == p[i])
			return true;
	}
	return false;
}

