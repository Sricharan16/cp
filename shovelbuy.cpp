#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{int r;
	int n;cin>>n>>r;
	for(int i=1;i<=10;i++)
	{
		if(n*i%10==0 || ((n*i)-r)%10==0)
			{cout<<i;return 0;}
	}
	return 0;
}