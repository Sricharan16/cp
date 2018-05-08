#include<iostream>
#include<string>
using namespace std; 
int main()
{
	string s="I hate ";
	string s1="I love ";
	int n;
	cin>>n;
	for(int i=1;i<=n-1;i++)
	{
		if(i%2==1)
			cout<<s;
		else
			cout<<s1;
		cout<<"that ";
	}
	for(int i=n;i>=n;i--)
	{
		if(i%2==1)
			cout<<s;
		else
			cout<<s1;
		cout<<"it";
	}
} 