#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int sum1=0,sum2=0,p=0;
	for (int i = 0; i < n; ++i)
	{
		int x,y;
		cin>>x>>y;
		sum1=x+sum1;
		sum2=sum2+y;
		if((x+y)%2==1)
			p=1;
	}
	if(sum1%2==0 && sum2%2==0)
		cout<<"0\n";
	else if(sum1%2==1 && sum2%2==1 && p==1)
		cout<<"1\n";
	else
		cout<<"-1\n";
}