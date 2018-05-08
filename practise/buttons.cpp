#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;cin>>n;
	int sum=0;
	sum+=n;
	for(int i=2;i<=n;i++)
	{
		sum+= (i*(n-i)+1);
	}
	cout<<sum;
	return 0;
}