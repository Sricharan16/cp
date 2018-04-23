#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long a,b;
	cin>>a>>b;
	long long  c=a+b;
	string ch="";
	string str1=to_string(a);
	string str2=to_string(b);
	for (long long i = 0; i < str1.length(); ++i)
	{
		if(str1[i]!='0')
		{
			ch+=str1[i];
		}
	}
	str1=ch;
	ch="";
	for (long long i = 0; i < str2.length(); ++i)
	{
		if(str2[i]!='0')
		{
			ch+=str2[i];
		}
	}
	str2=ch;
	long long d=stoi(str1);
	long long e=stoi(str2);
	str1=to_string(c);
	ch="";
	for (long long i = 0; i < str1.length(); ++i)
	{
		if(str1[i]!='0')
			ch+=str1[i];
	}
	str1=ch;
	 c=stoi(str1);
	if(c==d+e)
		cout<<"YES";
	else 
		cout<<"NO";

	return 0;
}