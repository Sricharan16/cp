#include<bits/stdc++.h>
using namespace std; 
int main(int argc, char const *argv[])
{
	int n,k;
	cin>>n>>k;
	int l=5-k;
	int count=0;
	int t;
	for (int i = 0; i < n; ++i)
	{
	cin>>t;
	if(t<=l)
		count++;
	}
	cout<<count/3;
	return 0;
}