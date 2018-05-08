#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int lowcount=0;
	int highcount=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>=65 && s[i]<=90)
			highcount++;
		else
			lowcount++;
	}
	if(lowcount<highcount)
	{
		for(int i=0;i<s.length();i++)
		{
			if(s[i]>=65 && s[i]<=90)
				cout<<s[i];
			else 
				{s[i]=s[i]-32;
				cout<<s[i];
			}
		}
	}
	else 
		for(int i=0;i<s.length();i++)
		{
			if(s[i]>=65 && s[i]<=90)
				{s[i]=s[i]+32;
					cout<<s[i];}
			else 
				cout<<s[i];
		}

}
