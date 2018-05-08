#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long n,m;cin>>n>>m;long long a;
	if((m+n)<3 || n==0)
	{
		cout<<"0";
		return 0;
	}
	if(m>2*n)
	{
		cout<<n;
		return 0;

	}
	
	else if(m==2*n)
		{cout<<n;
			return 0;
		}
	else
			{
				if(m%2==0)
				{
//cout<<"here11111";
					long long b=(double)(n-(m/2))/3;
					a=b;
					//cout<<a<<"\n";
					a+=(m/2);
					cout<<a;
					return 0;
				}
				else
				{	//cout<<"here";
					long long b=(double)(n-(m/2)+1)/3;
					a=b;
					a+=(m/2);
					cout<<a;
					return 0;
				}
			}
	return 0;
}