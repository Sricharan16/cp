#include<bits/stdc++.h>
using namespace std;
int main()
{
	priority_queue<int> pq;
	int n;
	cin>>n;
	int arr[6]={0,0,0,0,0,0};
	int brr[6]={0,0,0,0,0,0};
	int x;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		arr[x]++;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		brr[x]++;
	}
	int ans=0;
	int count=0;
	int sum=0;
	for(int i=1;i<=5;i++)
	{
		if((arr[i]-brr[i])%2==0)
			count++;
		if((arr[i]-brr[i])>0)
			sum+=(arr[i]-brr[i]);
		ans+=(arr[i]-brr[i]);
	}
	if(count==5 && ans==0)
	{
		cout<<sum/2;
	}
	else
		cout<<"-1";
	
	return 0;
}