#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	string s;
	if(n==1 && t==10)
	{
		cout<<"-1";
		return 0;
	}
	s=s+to_string(t);
	while(s.length()!=n)
	{
	if(t<10)
	{
		s=to_string(t)+s;
	}
	else
	{
		s="1"+s;
	}
}
cout<<s;
return 0;
}