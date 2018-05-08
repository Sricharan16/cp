#include<bits/stdc++.h>
using namespace std;
int calc(string* ptr)
{
	string s= *ptr;
	long long count=0;
	long long l=s.length();
	for(long long i=0;i<l-1;i++)
	{
		if(s[i]=='.'&& s[i+1]=='.')
		{
			count++;
		}
	}
	return count;
}
int main(int argc, char const *argv[])
{
	int n,m;cin>>n>>m;
	string s;cin>>s;
	string* ptr=&s;
	int x;char c;
	int res=calc(ptr);
	s="a"+s+"b";
	vector<int> ans;
	for (int i = 0; i < m; ++i)
	{
		cin>>x>>c;
		if(s[x]=='.'&& c=='.')
		{
			s[x]=c;
			ans.push_back(res);
		}
		else if(s[x]!='.' && c!='.')
		{
			s[x]=c;
			ans.push_back(res);
		}
		else if(s[x]=='.' && c!='.')
		{
//cout<<"entered here";
			if(s[x-1]=='.'&& s[x+1]=='.'){
				s[x]=c;
				res=res-2;
			}
			else if(s[x-1]=='.'&& s[x+1]!='.'){
				s[x]=c;
				res=res-1;

			}
			else if(s[x-1]!='.'&& s[x+1]=='.')
			{
				s[x]=c;
				res=res-1;
			}
			else{
				s[x]=c;
			}
			ans.push_back(res);
		}
		else
		{
			//cout<<"entered at"<<i+1;
			//cout<<"entered here too";
			if(s[x-1]=='.'&& s[x+1]=='.'){
				s[x]=c;
				res=res+2;
			}
			else if(s[x-1]=='.'&& s[x+1]!='.'){
				s[x]=c;
				res=res+1;

			}
			else if(s[x-1]!='.'&& s[x+1]=='.')
			{
				s[x]=c;
				res=res+1;
			}
			else{
				s[x]=c;
			}
			ans.push_back(res);
		}
		/* code */
		//cout<<s<<endl;
	}
	for(int i=0;i<ans.size();i++)
	{
		cout<<ans[i]<<endl;
	}
	//cout<<calc(ptr);
	return 0;
}