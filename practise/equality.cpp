#include <iostream>
using namespace std; 
int main()
{
	int n;
	cin>>n;

	int A[n];
	for(int i=0;i<n;i++)
		cin>>A[i];
	int maxi=0;
	for(int i=0;i<n;i++)
		if(A[i]>maxi)
			maxi=A[i];
		int sum=0;
	for(int i=0;i<n;i++)
		sum=sum+(maxi-A[i]);
	cout<<sum;	
	return 0;
}