#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	for (int i =1;	 i <=n; ++i)
	{
		if(i%2==1)
			{for (int i = 1; i <= m; ++i)cout<<"#";
			cout<<endl;}
		else if(i%4==2)
			{for(int i=1;i<=m-1;i++)cout<<".";
			cout<<"#";
			cout<<endl;}
		else if(i%4==0)
			{
			cout<<"#";
		for(int i=1;i<=m-1;i++)cout<<".";
			cout<<endl;}

	}
	return 0;
}