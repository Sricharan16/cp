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
	char A[n][5];
	int flags=0;
	for (int i = 0; i < n; ++i)
	{
	 	cin>>s;
	 	if(s[0]=='O' && s[1]=='O' && flags==0)
	 	{	flags=1;
	 		s[0]='+';
	 		s[1]='+';
	 	}
	 	if(s[3]=='O' && s[4]=='O' && flags==0)
	 	{	flags=1;
	 		s[3]='+';
	 		s[4]='+';
	 	}
	 	A[i][0]=s[0];A[i][1]=s[1];A[i][2]=s[2];A[i][3]=s[3];A[i][4]=s[4];
	}
	if(flags==0)
		{cout<<"NO";
		return 0;
		        
		}
	else
		{ cout<<"YES"<<endl;
	for (int i = 0; i < n; ++i)
		{for(int j=0;j<5;j++)
			cout<<A[i][j];
			cout<<endl;}}
	return 0;
}