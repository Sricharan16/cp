#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long n,k;cin>>n>>k;
	long long a[n];int t;long long sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>t;sum+=t;
		a[i]=sum;
	}
	long long mini=a[k-1];
	//cout<<mini<<endl;
	int pos=0;
	for(int i=1;i<=n-k;i++)
	{
		sum=a[i+k-1]-a[i-1];
		//cout<<sum<<endl;
		if(sum<mini)
		{
			//cout<<"came herwe";
			pos=i;
			mini=sum;
		}
	}
	cout<<pos+1;
	return 0;
}