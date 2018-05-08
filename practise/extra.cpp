#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,x,y,pos=0,neg=0;cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>x>>y;
		if(x<0)
			neg++;
		if(x>0)
			pos++;
	}
	if(neg==1 || pos==1)
		{cout<<"YES";return 0;}
	if(neg==0 || pos==0)
		{cout<<"YES";return 0;}
	cout<<"NO";
	return 0;
}