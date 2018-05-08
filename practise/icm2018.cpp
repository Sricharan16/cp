#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;string c="";
	for(int i=0;i<s.length();i++)
	{
		c=s[i]+c;
	}
	cout<<s+c;
	return 0;
}