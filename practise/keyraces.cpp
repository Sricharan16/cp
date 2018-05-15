#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll s,v1,v2,t1,t2;
	cin>>s>>v1>>v2>>t1>>t2;
	ll time1=2*t1;
	ll time2=2*t2;
	for(int i=1;i<=s;i++)
	{
		time2+=v2;
		time1+=v1;
	}
	if(time1>time2)
	{
		cout<<"Second";
	}
	else if(time1==time2)
		cout<<"Friendship";
	else
		cout<<"First";
	return 0;
}