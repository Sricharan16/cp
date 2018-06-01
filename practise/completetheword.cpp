#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ans[26];
	memset(ans,26,0);
	string str;
	int flags=0;
	cin>>str;
	if(str.length()<26)
		{cout<<"-1";
	return 0;}
	else
	{
		for(int i=0;i<=str.length()-26;i++)
		{
			int counti=0;
			int comp=0;
			fill_n(ans,26,0);
			for(int j=i;j<i+26;j++)
			{
				if(str[j]=='?')
					counti++;
				else
					{ans[str[j]-'A']++;}
			}
			for(int j=0;j<26;j++)
			{
				if(ans[j]==0)
					comp++;
			}
			//cout<<str.length()<<" "<<counti<<" "<<comp<<endl;
			if(counti>=comp)
			{
				flags=1;
				for(int j=i;j<i+26;j++)
				{
					if(str[j]=='?')
						{
							for(int k=0;k<26;k++)
							{
								if(ans[k]==0)
									{
									str[j]='A'+k;
									ans[k]++;
									break;
									}
							}
						}
				}
				break;
			}
		}
	}
	if(flags==1)
	{
		for(int i=0;i<str.length();i++)
		{
			if(str[i]=='?')
				cout<<"A";
			else
				cout<<str[i];
		}
	}
	else
	{
		cout<<"-1";
	}
	return 0;
}