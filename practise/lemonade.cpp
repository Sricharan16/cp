#include<bits/stdc++.h>
using namespace std;
int max(int a,int b){
	if(a>b)
		return a;
	else
		return b;
}
int main(int argc, char const *argv[])
{
	long long n,k;
	cin>>n>>k;
	int a[n+2];
	a[0]=k;a[k+1]=k;
	for (int i = 1; i <= n; ++i)
	{
		cin>>a[i];
	}
	int b[n+1]={0};b[1]=a[1];
	for(int i=2;i<=n;i++)
	{
		if(a[i-1]+a[i]>=k)
		{
			b[i]=a[i];
		}
		
		else{
			b[i]=max(k-b[i-1],a[i]);
		}
	}
	int sum=0;
	for(int i=1;i<=n;i++){
		sum=sum+(b[i]-a[i]);
	}cout<<sum<<endl;
	for(int i=1;i<=n;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}