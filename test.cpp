#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"\n Enter the a = ";
	cin>>a;
	cout<<"\n Enter the b = ";
	cin>>b;
	cout<<"\n Enter the c = ";
	cin>>c;
	if(a>b && a>c)
	{
		cout<<a<<"\n is greater ";
	}
	else if(b>a && b>c)
		cout<<b<<"\n is greater ";
	else
	{
		cout<<c<<"\n is greater ";
	}
}
