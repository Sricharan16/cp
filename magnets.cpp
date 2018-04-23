#include<iostream>
#include<string>
using namespace std; 
int main()
{ 
	int n;
	cin>>n;
	int a[n];
	int count=0;
	int c;
	cin>>a[0];
	for(int i=1;i<n;i++)
	{
cin>>a[i];
	if(a[i]!=a[i-1])
		count++;
	}
	cout<<count+1;
}