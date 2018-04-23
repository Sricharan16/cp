#include<bits/stdc++.h>
using namespace std;
int main()
{

	long long n,t,c;cin>>n>>t>>c;
	int a[n];int count=0;
	int flags=0;	
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]>t)
		{

			flags=0;
			
		}
		else
		{
			//cout<<"#"<<flags<<endl;
			flags++;
		}
		if(flags>=c)
		{
			//not enterr
			count++;
		}
	}
	cout<<count<<endl;
}