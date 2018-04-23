#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int flags=0;
	if(s.length()<=3){
	if(s=="114"||s=="111"||s=="141"||s=="144"||s=="11"||s=="14"||s=="1")
	{
		cout<<"YES";
	}
	else
		cout<<"NO";
	return 0;
    }
    else
    {
	for (int i = 0; i < s.length()-2; ++i)
	{
		if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
		{
			i=i+2;
		}
		else if(s[i]=='1' && s[i+1]=='4')
		{
			i=i+1;
		}
		else if(s[i]=='1')
		{

		}
		else
		{
			flags=1;
		}
	}
	if(flags==1)
	{
		cout<<"NO";
	}
	else
	{
		if((s[s.length()-2]=='1' && s[s.length()-1]=='4')||(s[s.length()-2]=='1' && s[s.length()-1]=='1')||( s[s.length()-3]=='1'&&s[s.length()-2]=='4' && s[s.length()-1]=='4')||( s[s.length()-3]=='1'&&s[s.length()-2]=='4' && s[s.length()-1]=='1')||( s[s.length()-4]=='1'&&s[s.length()-3]=='4'&&s[s.length()-2]=='4' && s[s.length()-1]=='1'))
		{
			cout<<"YES";
		}
		else
			cout<<"NO";
	}
}
	return 0;
}