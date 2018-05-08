#include<bits/stdc++.h>
#define f(i,p,n) for(int i = p; i < n; ++i)
#define fd(i,p,n) for(int i = p; i > n;i--)
using namespace std;
int main(int argc, char const *argv[])
{
	int n;cin>>n;int A[n-1];
	f(i,0,n-1)cin>>A[i];
	int a,b;cin>>a>>b;int sum=0;
	f(i,a,b){sum=sum+A[i-1];}cout<<sum;
	return 0;
}