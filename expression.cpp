#include<iostream>
#include<cmath>
int max(int a, int b)
{
	if(a>b)
		return a;
	else 
		return b;
}
using namespace std; 
int main()
{
	int a,b,c;
	int maxi=0;
	cin>>a>>b>>c;
	maxi=max(maxi,a+(b+c));
	maxi=max(maxi,a*(b+c));
	maxi=max(maxi,a+(b*c));
	maxi=max(maxi,a*(b*c));
	maxi=max(maxi,(a+b)+c);
	maxi=max(maxi,(a*b)+c);
	maxi=max(maxi,(a+b)*c);
	cout<<maxi;
}