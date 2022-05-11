#include <iostream>
using namespace std;
int main()
{
int a[]{11,2,11,3,4,2,6,7,2};
int aLength = sizeof(a)/sizeof(*a);
int b[aLength]{};
int c[aLength];

for(int i = 0; i < aLength; i++){

    for(int j = 0; j < aLength; j++){
        c[j] = a[j];

        if(a[i] == c[j]){
            b[i] += 1;
        }
    }
}
    for (int i = 0; i < aLength; i++){
        cout << "a[" << a[i] << "] repeats " << b[i] << " times" << endl;
    }

}

