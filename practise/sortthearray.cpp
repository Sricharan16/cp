#include<bits/stdc++.h>
using namespace std; 
int  main(int  argc, char const *argv[])
{
	long long  n;cin>>n;
	long long  a[n];long long  b[n];
	for (long long  i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (long long  i = 0; i < n-1; ++i)
	{
		if(a[i]>a[i+1])
		{
			b[i]=1;
		}
		else if(a[i]<a[i+1])
		{
			b[i]=-1;
		}
	}
	long long  z=b[0];
	vector<long long > vecti;
	long long  count=0;
	for (long long  i = 1; i < n-1; ++i)
	{
		if(b[i]==z)
		{

		}
		else
		{
			vecti.push_back(i);
			count++;
			z=b[i];
		}
		//cout<<b[i]<<" ";
	}
	//cout<<count;
	if(count==0 && z==1)
	{
		cout<<"yes"<<endl;
		cout<<"1 "<<n<<endl;

	}
	else if(count==0 && z==-1)
	{
		cout<<"yes"<<endl;
		cout<<"1 1"<<endl;
	}
	else if(count==1 && b[0]==1)
	{
		
		long long  c[n];
		for(long long  j=0,i=vecti[0]+1-1;i>=0;i--,j++)
		{
			c[j]=a[i];
		}
		for(long long  i=vecti[0]+1;i<n;i++)
		{
			c[i]=a[i];
		}
		for(long long  i=0;i<n-1;i++)
			{
				if(c[i+1]<c[i])
				{
					cout<<"no";
					return 0;
				}
			}
			cout<<"yes"<<endl;
		cout<<1<<" "<<vecti[0]+1<<endl;
		//cout<<a[0]<<" "<<a[vecti[0]+1-1]<<endl;
	}
	else if(count==1 && b[0]==-1)
	{
		
		//cout<<a[vecti[0]+2-1]<<" "<<a[n-1]<<endl;
//cout<<"damn here";

		long long  c[n];
		for(long long  i=0;i<vecti[0];i++)
		{
			c[i]=a[i];
		}
		for(long long  j=vecti[0],i=n-1;i>=vecti[0]+1,j<n;i--,j++)
		{
			//cout<<">"<<a[i]<<endl;
			c[j]=a[i];
		}
		
		for(long long  i=0;i<n;i++)
			{
				if(c[i+1]<c[i])
				{
					cout<<"no";
					return 0;
				}
				//cout<<c[i]<<" ";
			}
			cout<<"yes"<<endl;
		cout<<vecti[0]+1<<" "<<n<<endl;
	}
	else if(count==2)
	{
		cout<<"yes"<<endl;
		cout<<vecti[0]+1<<" "<<vecti[1]+1<<endl;
	}
	else
	{
		cout<<"no"<<endl;
	}
	return 0;
}