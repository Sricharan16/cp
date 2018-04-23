#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	string str;
	int a[3]={0};
	for(int i=0;i<s.length();i=i+2)
	{
		int c=s[i]-49;
		a[c]++;
	}
	if(a[0]>0)
	for(int i=a[0];i>0;i--)
	{
		str=str+"1"+"+";
	}
	if(a[1]>0)
	for(int i=a[1];i>0;i--)
	{
		str=str+"2"+"+";
	}
	if(a[2]>0)
	for(int i=a[2];i>0;i--)
	{
		str=str+"3"+"+";
	}
	for(int i=0;i<str.length()-1;i=i+1)
	{
		cout<<str[i];
	}
}