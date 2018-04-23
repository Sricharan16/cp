#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	long long int  n,k;
	cin>>n>>k;
	double q=(double)n/2;
	
	long long int p=ceil(q);
	//cout<<p<<endl;
	if(k<=p)
	{
      cout<<2*k-1;
	}
	else
	{
		
		cout<<2*(k-p);
	}
	return 0;
}