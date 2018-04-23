#include<iostream>
using namespace std;
int main()
{
	int n,h;
	cin>>n;
	int A[n];
	int count=0,p;
	for(int i=0;i<n;i++)
	{	
		cin>>A[i];
		
	}
	for(int i=0;i<n;i++)
	{	
		
		if(360%(180-A[i])!=0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}