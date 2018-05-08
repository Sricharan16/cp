#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long  n;cin>>n;
	long long arr[n+1][2];
	for(long long i=1;i<=n;i++)
	{
		cin>>arr[i][0]>>arr[i][1];
	}
	if(n==1)
	{
		cout<<"1";
		return 0;
	}
	if(n==2)
	{
		cout<<"2";
		return 0;
	}
	long long count=2;
	long long occ= arr[1][0];
	for(long long i=2;i<=n-1;i++)
	{
		if(arr[i][0]-arr[i][1]>occ )
		{
			occ=arr[i][0];
			count++;
		}
		else if(arr[i][0]+arr[i][1]<arr[i+1][0])
		{
			occ=arr[i][0]+arr[i][1];
			count++;
		}
		else
		{
			occ=arr[i][0];
		}

	}
	cout<<count;
	return 0;
}