#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int mini=999999;
	int maxi=0;
	int maxpos,minpos;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>maxi)
		{
			maxi=max(maxi,a[i]);
			maxpos=i;
		}
		if(a[i]<=mini)
		{
			mini=min(mini,a[i]);
			minpos=i;
		}
	}
	if(maxpos<minpos)
		cout<<maxpos+n-minpos-1;
	else 
		cout<<maxpos+n-minpos-2;
	return 0;
}