#include <iostream>
using namespace std;
int main()
{
	int n = 100,i,j,k;
	int a[n]{};
	int input;
	int temp;
	int aux;

	for(int i = 0; i < n; i++){

        cout<<"\n Enter the elements =\n";
        cin >> input;

        a[i]= input;
        if( i > 0){
            for(j = i; j > 0; j-- ){

                if(a[j-1] > input){
                    a[j] = a[j-1];
                    a[j-1] = input;
                } else break;
            }
        }

        for (k =0; k <= i; k++){
            cout<< a[k] << " ";
        }

	}

}

