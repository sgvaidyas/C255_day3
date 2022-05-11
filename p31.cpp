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
	int j;
	
	while (displayed == false){
	cout << "Please put in a number or missing \n";
	cin >> input;
	if (input == "missing"){
		if (length > 0){
			//This is the new code
			cout<<"The missing numbers are: ";
			j = 0;
			for (number = a[0] + 1; number < a[length - 1]; number++){
				//is i in a?
				for (int k = j; k < length; k++){
					if (a[k] < number) j = k;//minor optimisation
					else if (a[k] == number){j = k; break;}
					else {cout<<number<<" "; break;}
				}
			}
		displayed = true;
		}
		else{
			cout << "\n Please give me a number first \n";
		}
	}
	else{
		stringstream(input)>>number; //typing means 
		length++;
		//locate insertion index
		insertionindex = 0;
		for (insertionindex; insertionindex < length; insertionindex++) if (a[i
		else{
				stringstream(input)>>number; //typing means 
				length++;
				//locate insertion index
				insertionindex = 0;
				for (insertionindex; insertionindex < length; insertionindex++) if (a[insertionindex] > number) break;
				//right shift all elements
				for (int j = length; j > insertionindex; j--) a[j] = a[j - 1];
				//insert
				a[insertionindex] = number;
			}
		}
	return 0;
}

	
	
	
	
	
	
	
	
	
	
	
	

