#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;cin>>n;long long q;cin>>q;
	long long a[n];
	long long b[n]={0};
	for(long long i=0;i<n;i++)
		cin>>a[i];
	long long x,y,sum=0;
	for(long long i=0;i<q;i++){
		cin>>x>>y;

		b[x-1]=b[x-1]+1;
		if(y<n)
			b[y]=b[y]-1;
		
	}
	for(long long i=1;i<n;i++){
		long long c=b[i];
		b[i]=c+b[i-1];
	}
	sort(b,b+n);
	sort(a,a+n);
	for (long long i = 0; i < n; ++i)
	{
		sum+=(a[i]*b[i]);
	}
	cout<<sum;
	return 0;
}