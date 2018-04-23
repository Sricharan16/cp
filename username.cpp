#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	cin>>a[0];
	int count=0;
	int maxi=a[0];
	int mini=a[0];
	for(int i=1;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>maxi)
		{ cout<<"here";
			maxi= max(maxi,a[i]);
			count++;
		}
		if(a[i]<mini)
		{ 
			mini= min(mini,a[i]);
			
			count++;
		}
	}
	cout<<count;
	return 0;
}