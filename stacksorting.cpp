#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;cin>>n>>k;int b[n]={0};
	// for(int i=n-1;i>=0;i--)
	// {
	// 	// if(b[i]!=1)
	// 	// 	cout<<i+1<<" here";
	// 	cout<<b[i]<<" ";
	// }cout<<"done printing";
	int A[k+2];for (int i = 1; i <=k; ++i)
	{
		/* code */cin>>A[i];b[A[i]-1]=1;
	}
	A[0]=n;A[k+1]=1;
	if(k!=1){for (int i = 1; i <= k-1; ++i)if(A[i]<A[i+1]){cout<<"-1";return 0;}}
	for (int i = 1; i <= k; ++i)
	{   //if(A[i]==n)continue;
		//if(A[i]==1)continue;
		cout<<A[i]<<" ";
	}//cout<<endl;
	int g=1;
	for (int j = k; j >=0; j--)
	{	//cout<<"fuck";
		for (int i = A[j]-1; i >A[j+1]; --i)
		{	if(i+1==n )
			cout<<n<<" ";
			cout<<i<<" ";
			if(i-1==1)
			cout<<"1"<<" ";
		}
	}
	// if(A[k+1]!=1)
	// {
	// 	for(int i=A[k+1]-1;i>=1;i--){cout<<i<<" ";b[i-1]=1;}
	// }
	// for(int i=n-1;i>=0;i--)
	// {
	// 	if(b[i]!=1)
	// 		cout<<i+1<<" ";
	// 	//cout<<b[i]<<" ";
	// }
	return 0;
}