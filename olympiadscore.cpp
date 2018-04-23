#include<bits/stdc++.h>
using namespace std;
bool prime(long long n)
{
	if(n==1)
		return false;
	if(n==2)
		return true;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return false;

	}
	return true;
}
int main(int argc, char const *argv[])
{
	long long x,z,y;cin>>x>>y;long long temp;
	if(x%2==0)
		{ z=x-1;}
	long long co=(y/x);
	for(long long i=y;i>=0;i--)
	{
		if(prime(i)||(i>(z*co) && i%2!=0))
		{
			temp=i;
			break;
		}
	}
	if(temp>x)
		cout<<temp;
	else
		cout<<"-1";
	return 0;
}              