#include <iostream>

using namespace std;

int main() {
    
    int n;
    cout<<"Please enter a value for n:";
    cin>>n;
    cout<<endl;
    
    int sp = n-1;
    int spp = sp;
    int i = 0;
    int m = n-1;
    m*=2;
    m+=n;
    int j = 0;
    int nn = n/2;
    
    while(i<n)
    {
        
        while(j<m)
        {
            if(i==j && j<n)
                cout<<"*";
            else if(i+j==n+n-2)
                cout<<"*";
            else if(j-i==n+n-2)
                cout<<"*";
            else
                cout<<"-";
            j++;
        }
        
        cout<<endl;
        j = 0;
        i++;
    }
    

    return 0;
}

