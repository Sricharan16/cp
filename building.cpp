#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	 int A[n];int B[n];
	 for(int i=0;i<n;i++)
	 {	B[i]=i+1;	
	 	cin>>A[i];
	 	
	 }
	 	sort(A,A+n);long long sum=0;
	 	for (int i = 0; i < n; ++i)
	 	{
	 		sum=sum+abs(B[i]-A[i]);
	 	}
	 	cout<<sum;
	return 0;
}