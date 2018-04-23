#include<bits/stdc++.h>
using namespace std; 
#define MAX 1000000007
int main(int argc, char const *argv[])
{
	//cout<<float(1/2)%MAX;
	int n,m;cin>>n>>m;
	string s1,s2;//	cin>>s1>>s2;
	int a,b;
	long long num=1,den=1;long long prob;
	int flags=0;int set=1;
	int x[n],y[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>x[i];
	}
	
	for (int i = 0; i < n; ++i)
	{
		cin>>y[i];
	}
		for(int i=0;i<n;i++)
	{
		a=x[i];b=y[i];
		//cout<<"entered here"<<endl;
		if(flags==0 && a<b && a!=0)
		{
			//cout<<"this loop";
			prob=0;
			//break;
		}
		else if(a==0 && b==0 && flags==0)
		{
			//cout<<"this loop";
			num=num*(m-1);
			den=den*m*2;

		flags=1;
		}
		else if(a==0 && b!=0 && flags==0)
		{
			
			num=num*(m-b);
			cout<<"den"<<num<<endl;
			den=den*m;
			
		flags=1;
		}
		else if(a!=0 && b==0 && flags==0)
		{
			//cout<<"this loop";
			num=num*(a-1);
			den=den*m;
		flags=1;
		}
		// else if(s1[i]!=0 && s2[i]!=0)
		// {
		// 	//do nothing
		// flags=1;
		// }
	}
	cout<<num<<"/"<<den;
	//cout<<prob;
	return 0;
}