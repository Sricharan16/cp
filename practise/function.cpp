#include<iostream>
#include<cmath>
int main()
{
	int n;
	cin>>n;
	if(n%2==0)
		cout<<n/2;
	else
		cout<<(n/2)-n;
}