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
	cin>>n;
	if(n==0)
	{
		cout<<"1";
		return 0;
	}
	if((n-1)%4==0)
	{
		cout<<"8";
		return 0;
	}
	else if((n-1)%4==1)
		cout<<"4";
	else if((n-1)%4==2)
		cout<<"2";
	else if((n-1)%4==3)
		cout<<"6";
	return 0;
}