#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;cin>>n;
	int A[n];int sum=0;
	for(int i=0;i<n;i++)cin>>A[i];sort(A,A+n);
	for (int i = 0; i < n-1; ++i)
	{
		/* code */if(A[i+1]==A[i])
		{sum=sum+1;
	A[i+1]++;}
	}
	cout<<sum;
	return 0;
}