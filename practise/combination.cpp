#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char old[n];
	char newi[n];
	for(int i =0;i<n;i++)
		{cin>>old[i];}

	for(int i =0;i<n;i++)
		{cin>>newi[i];}
	int sum=0;

	for(int i =0;i<n;i++)
		{sum+=min(abs(newi[i]-old[i]),10-abs(newi[i]-old[i]));}
	cout<<sum;
	return 0;
}