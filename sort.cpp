/*I shall rise*/
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define mod (1000*1000*1000+7)
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,b) for(int i=a;i<b;i++)
#define fd(i,a,b) for(int i=a;i>b;i--)
charan
{
	int n;
	int a[n][2]={0};
	f(i,0,n)cin>>a[i][0];
	f(i,1,n)
	{
		if(a[i][0]>=a[i-1][0])
		{
			a[i][1]=0;
		}else a[i][1]=1;
	}
	int minpos=0,maxpos=0;
	int flags=0;
	f(i,1,n)
	{
		if(a[i][1]==1 && flags==0)
		{
			minpos=i;
		}
	}
}