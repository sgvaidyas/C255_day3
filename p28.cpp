#include <iostream>
#include <map>

using namespace std;
map<int,int> myMap{};

void slice (int &n ,int &count){
    int lastDig =n-(n/10)*10;
    if(myMap[lastDig]==1)
        count++;
    else
    myMap[lastDig]++;
    n= n/10;

    if( n!=0)
    slice(n,count);
}

int main (){
int number = 1123445;
int count(0);
slice(number,count);
    cout<<count<<endl;
    return 0;

}

