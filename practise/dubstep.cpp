#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<s.length();i++)

	{

	   if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B')
			{
				if(i && count>0)
				{
					cout<<" ";
					count=0;
				}
			    
			i=i+2;
		}
		else
		{ 
			cout<<s[i];
			count++;
		}
	}
}