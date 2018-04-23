#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;cin>>n;string str;
	cin>>str;
	char ch=str[1];
	char l=str[0];
	for(int i=0;i<n;i++)
	{
		//cout<<str<<endl;
		if(str[i]!=str[n-1-i] && str[i]!=l)
			{
				cout<<"NO";
		return 0;
	}
		for(int j=0;j<n;j++)
		{
			if(j==i||j==n-1-i)
			{

			}
			else
			{
				if(str[j]!=ch || str[j]==l)
				{
					cout<<"NO";
					return 0;
				}
			}
		}

		
		cin>>str;
	}
	cout<<"YES";
	return 0;
}