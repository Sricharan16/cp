#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long n;cin>>n;
	long long a[n+1];
	long long b[n+1];
	for (long long i = 1; i <= n; ++i)
	{
		/* code */
		cin>>a[i];
		b[i]=a[i];
	}
	sort(b+1,b+n+1);
	// for(int i=1;i<=n;i++){
	// 	cout<<b[i]<<" ";
	// }
	// cout<<"#"<<endl;
		for(long long i=2;i<=n;i++){
		a[i]=a[i]+a[i-1];
		b[i]=b[i]+b[i-1];
	}b[0]=0;a[0]=0;
	long long t;cin>>t;long long x,y,z;
	while(t--){
		cin>>x>>y>>z;
		if(x==1){
			cout<<a[z]-a[y-1]<<endl;
		}
		else
		{
			cout<<b[z]-b[y-1]<<endl;
		}
	}
	return 0;
}