#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int r,c;cin>>r>>c;
	int a[r][c];
	string s;
	for(int i=0;i<r;i++)
	{
		cin>>s;
		for(int j=0;j<c;j++)
		{
			if(s[j]=='S')
				a[i][j]=1;
			else
				a[i][j]=0;
		}
	}

	int flags=0;int count=0;
	for(int i=0;i<r;i++)
	{
		flags=0;
		for(int j=0;j<c;j++)
		{
			if(a[i][j]==1)
				flags=1;
		}
		if(flags==0)
			{count++;
			for(int j=0;j<c;j++)
				{
					//if(a[i][j]==0)
						a[i][j]=2;
				}
	}
	}
	for(int i=0;i<c;i++)
	{
		flags=0;
		for(int j=0;j<r;j++)
		{
			if(a[j][i]==1)
				flags=1;
		}
		if(flags==0)
			{count++;
				for(int j=0;j<r;j++)
					{
						//cout<<"> "<<i<<" "<<j<<endl;
						//if(a[i][j]==0)
							a[j][i]=2;
					}
			}
	}
	count=0;
	for(int i=0;i<r;i++)
	{
		//cin>>s;
		for(int j=0;j<c;j++)
		{
			
				//cout<<a[i][j]<<" ";
			if(a[i][j]==2)
				count++;
		}
		//cout<<endl;
	}
	cout<<count;
	return 0;
}