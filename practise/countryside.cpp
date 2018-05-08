#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	
	int A[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}
	if(n==1 && A[0]==15)
		{cout<<"DOWN"; return 0;}
	if(n==1 && A[0]==0)
		{cout<<"UP"; return 0;}
	if(n==1 && A[0]!=0 && A[0]!=15)
	{
		cout<<"-1";
		return 0;
	}
	if(A[n-2]<A[n-1] && A[n-1]!=15)
		cout<<"UP";
	else if(A[n-2]<A[n-1] && A[n-1]==15)
		cout<<"DOWN";
	else if(A[n-2]>A[n-1] && A[n-1]!=0)
		cout<<"DOWN";
	else 
		cout<<"UP";
	
	
	return 0;
}