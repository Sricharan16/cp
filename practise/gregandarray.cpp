#include<bits/stdc++.h>
//typedef pair<<int,int>,int> operation;
using namespace std;
int main(int argc, char const *argv[])
{
 	ios_base::sync_with_stdio(0);
 	cin.tie(NULL);
 	cout.tie(NULL);
	long long n,m,k;
	cin>>n>>m>>k;
	long long operation[m][3];
	long long arr[n];
	for (long long i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	for (long long i = 0; i < m; ++i)
	{
		cin>>operation[i][0]>>operation[i][1]>>operation[i][2];
	}
	long long b[m]={0};long long x,y;
	// for (long long i = 0; i < k; ++i)
	// {
	// 	cin>>x>>y;
	// 	for(long long j=x;j<=y;j++){
	// 	b[operation[j-1][0]-1]+=operation[j-1][2];
	// 	if(operation[j-1][1]<n)
	// 		b[operation[j-1][1]]-=operation[j-1][2];
	// }
	//}
	for (long long i = 0; i < k; ++i)
	{
		cin>>x>>y;
		b[x-1]+=1;
		if(y<m)
			b[y]-=1;
}
	for (long long i = 1; i < m; ++i)
	{
		/* code */
		b[i]+=b[i-1];
	}
	long long c[n]={0};
	for(long long j=0;j<m;j++){
			c[operation[j][0]-1]+=((operation[j][2])*b[j]);
	 	if(operation[j][1]<n)
	 		c[operation[j][1]]-=((operation[j][2])*b[j]);
	}
	for (long long i = 1; i < n; ++i)
	{
		/* code */
		c[i]+=c[i-1];
	}
	for(long long i=0;i<n;i++)
		cout<<arr[i]+c[i]<<" ";
	return 0;
}