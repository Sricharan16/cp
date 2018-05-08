#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;int mini=999999999,maxi=0;cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for (int i = 0; i < n; ++i)
	{
		mini=min(mini,arr[i]);
		maxi=max(maxi,arr[i]);
	}
	int count=0;
	for (int i = 0; i < n; ++i)
	{
		if(arr[i]>mini && arr[i]<maxi)
			count++;
	}
	cout<<count;
	return 0;
}