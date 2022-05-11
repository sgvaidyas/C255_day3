#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
	//maximum 900 elements
	int a[900];
	int length = 0;
	//termination of program
	bool displayed = false;
	//input variables
	string input;
	int number;
	int insertionindex;
	
	while (displayed == false){
	cout << "Please put in a number or display \n";
	cin >> input;
	if (input == "display"){
		if (length > 0){
			displayed = true;
			for(int i=0; i<length; i++) cout<<a[i]<<"\t";
		}
		else{
			cout << "\n Please give me a number first \n";
		}
	}
	else{
		stringstream(input)>>number; //typing means 
		length++;
		//locate insertion index
		
		for (insertionindex=0; insertionindex < length; insertionindex++) 
			if (a[insertionindex] > number) break;
		//right shift all elements
		for (int j = length; j > insertionindex; j--) a[j] = a[j - 1];
		//insert
		a[insertionindex] = number;
	}
}
return 0;
}

