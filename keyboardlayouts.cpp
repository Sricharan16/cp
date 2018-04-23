#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s1,s2;cin>>s1>>s2;
	map <char,char> blaze;
	for(int i=0;i<26;i++)
	blaze.insert(make_pair(s1[i],s2[i]));
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++){
		if(str[i]>='0' && str[i]<= '9'){

		}
		else if(str[i]>=65 && str[i]<=90)
		{
			
			str[i]=blaze[str[i]+32]-32;
		}
		else
		{
			char ch=blaze[str[i]];
			str[i]=ch;
		}
	}cout<<str;
	return 0;
}