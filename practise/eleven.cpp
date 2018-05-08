#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int f[1001];
	f[2]=1;f[1]=1;
	for(int i=3;i<1001;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	int p=2;
	for(int j=1;j<n+1;j++)
	{
		if(f[p]==j)
		{
			cout<<"O";
			p++;
		}
		else
			cout<<"o";
	}
	return 0;
}