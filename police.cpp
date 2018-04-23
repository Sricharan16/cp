#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int mini=0,sum=0;
	for(int i=0;i<n;i++)
		{  
		cin>>a[i];
		sum=sum+a[i];
		if(sum<0)
			mini=min(mini,sum);
	}
	cout<<mini*(-1);
}