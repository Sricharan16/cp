#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,c;
	cin>>n>>c;
	int a[n];
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(n!=1)
	{
		int flags=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]-a[i-1]>c)
		{
			flags=1;
			count=0;
		}
		count++;
	}
	if(flags==1)
	cout<<count;
else 
cout<<count+1;}
	else
	{
		cout<<"1";
	}
	return 0;
}