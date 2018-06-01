#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	while(n>0)
	{
		n--;
		long long  t;
		cin>>t;
		int arr[t+1];
		for(int i=1;i<=t;i++)
			cin>>arr[i];
		sort(arr+1,arr+t+1);
		long long sum=0;
		for(int i=1;i<=t/2;i++)
		{
			sum+=arr[t+1-i]-arr[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}