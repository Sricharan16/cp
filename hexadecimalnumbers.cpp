#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	//int num=atoi(s);
	int l=s.length();
	
	int ans = pow(2,l-1)-1;
	int sol=1;
	int flags=0;
	for(int i=1;i<s.length();i++)
	{
		if(s[i]-'0'>0)
		{
			sol=sol*2;
			flags=1;
		}
		else if(s[i]-'0'==0 && flags==0)
		{
			sol=sol*1;
		}
		else
			sol=sol*2;
	}
	if(s[s.length()-1]==0)
		sol=sol-1;
	cout<<ans+sol;	
	return 0;
}