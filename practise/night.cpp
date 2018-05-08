#include<bits/stdc++.h>
using namespace std;
int main()
{ 	char temp='a';
	string s;long long sum=0;cin>>s;
	for(int i=0;i<s.length();i++)
	{
		sum=sum+min(abs(s[i]-temp),26-abs(s[i]-temp));
		temp=s[i];
	}
	cout<<sum;
}