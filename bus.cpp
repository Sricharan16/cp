#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string s;
	vector<string> vetri;
	int flags=0;
	for (int i = 0; i < n; ++i)
	{
	 	cin>>s;
	 	if(s[i]=='O'&&s[i+1]=='O' && flags==0)
	 	{	flags=1;
	 		s[i]='+';
	 		s[i+1]='+';
	 	}
	 	if(s[i+3]=='O'&&s[i+4]=='O' && flags==0)
	 	{	flags=1;
	 		s[i+3]='+';
	 		s[i+4]='+';
	 	}
	 	vetri.push_back(s);
	}
	if(flags==0)
		{cout<<"NO";
		return 0;}
	else
		{ cout<<"YES"<<endl;
	for (int i = 0; i < n; ++i)
		cout<<vetri[i]<<endl;}
	return 0;
}