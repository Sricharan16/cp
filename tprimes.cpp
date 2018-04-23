#include<bits/stdc++.h>
using namespace std;
bool primo[1000001];
void  prime(long long  n)
{	//primo[1000001]={true};
	for(int i=2;i<=n;i++)
	primo[i]=true;
	//cout<<primo[2]<<endl;
	for(int p=2;p*p<=n;p++){
		//cout<<p<<endl;
		if(primo[p]==true)
			for (int i=2*p; i<=n;i+=p)
			{
				//cout<<p<<" "<<i<<endl;
				primo[i]=false;
			}
	}
	//cout<<"here";
	//return 0
}
long long  perfectsquare(long long  n)
{
	long long  c =sqrt(n);
	if(c*c==n)
		return 1;
	else
		return 0;
}
int  main()
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long  n;
	long long  t;
	cin>>n;
	prime(1000000);
	
	cout<<endl;
	for (long long  i = 0; i < n; ++i)
	{
		cin>>t;
		if(perfectsquare(t))
		{
			int c=sqrt(t);
			//cout<<c<<endl;
			if(primo[c])
			{
				cout<<"YES"<<endl;
			}
			else
			{
					cout<<"NO"<<endl;
			}
		}
		else
				cout<<"NO"<<endl;
	}
	return 0;
}