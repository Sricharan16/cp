#include<bits/stdc++.h>
#define f(i,a,n) for(int i = a; i < n; ++i)
#define fd(i,a,n) for(int i = a; i > n;i--)
using namespace std;
int main(int argc, char const *argv[])
{
	int n;cin>>n;int A[n];
	for (int i = 0; i < n; ++i)
	{
	 cin>>A[i];
	}int mini=0;int B[n]={0};
	fd(i,n-1,-1){B[i]=mini;mini=max(mini,A[i]);}
	//f(i,0,n)cout<<B[i]<<" ";cout<<endl;
	f(i,0,n){if(A[i]<B[i])cout<<B[i]-A[i]+1<<" ";else if(A[i]==B[i])cout<<"1"<<" ";else cout<<"0"<<" ";}

	return 0;
}			