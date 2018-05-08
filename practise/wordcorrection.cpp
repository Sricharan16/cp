#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;string s;string p="";string z="";cin>>n;
	cin>>s;
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
		{
			if(z=="")
			{
				z=s[i];
			}
		}
		else
		{
			if(z!="")
			{
				p=p+z;
				z="";
			}
			p=p+s[i];
			//cout<<"#"<<p<<endl;
		}
	}
	if(p=="")
		p=p+z;
	else if(z!="")
		p=p+z;
	cout<<p;
		return 0;
}