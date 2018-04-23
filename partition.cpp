#include<bits/stdc++.h>
using namespace std; 
int main(int argc, char const *argv[])
{
	int n;cin>>n;
	long long sum,t;
	sum=0;
	for (int i = 0; i < n; ++i)
	{
		cin>>t;
		sum+=abs(t);
	}
	cout<<sum;
	return 0;
}