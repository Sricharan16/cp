#include<iostream>
using namespace std; 
int main()
{
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	string p;
	for(int i=1;i<=t;i++)
	{
		for(int i=0;i<s.length()-1;i++)
		{
			if(s[i+1]=='G' && s[i]=='B')
			{
				char temp=s[i+1];
				s[i+1]=s[i];
				s[i]=temp;
				i++;
			}
		}
	}
	cout<<s;
}