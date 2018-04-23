#include<iostream>
#include<cmath>
using namespace std;
bool prime(long int n)
{
	if(n==1)
		return false;
	if(n==2)
		return true;
	long int k=0;
	long int p=sqrt(n);
	//cout<<p;
	for(long int i=2;i<=p;i++)
	{
		if(n%i==0)
			return false;
	}
		return true;
}
int main()
{
	long int n,x;
	cin>>n>>x;
	long int xount=0;
	long int p=sqrt(x);
	if(prime(x) && x<=n)
	{
		cout<<"2";
		return 0;
	}
	if(prime(x) && x>n)
	{
		cout<<"0";
		return 0;
	}

	for(long int i=0;i<=p;i++)
		for(long int j=0;j<=p;j++)
			if((i+1)*(j+1)==x)
				xount++;

	if(x==p*p)
		cout<<xount*2-1;
	else
		cout<<xount*2;
	return 0;
}