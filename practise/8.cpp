/*I shall rise*/
#include<vector>
#include<map>
#include<bits/stdc++.h>
using namespace std;
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define mod (1000*1000*1000+7)
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>b;i--)
#define gdb(n) cout<<">>"<<n<<"<<"<<endl;
charan
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);string s;cin>>s;string comp;
	int a[1000]={0};
	f(i,0,1000)
	if(i%8==0)a[i]=1;
	if(s.length()>=3)
	{f(i,0,s.length()-2)
	{
		f(j,i+1,s.length()-1)
		{
			f(k,j+1,s.length())
			{
				comp=to_string(s[i]-'0')+to_string(s[j]-'0')+to_string(s[k]-'0');
				 int icomp=stoi(comp);
				 int x=stoi(to_string(s[i]-'0')+to_string(s[k]-'0'));
				  int z=stoi(to_string(s[i]-'0')+to_string(s[j]-'0'));
				 int y=stoi(to_string(s[j]-'0')+to_string(s[k]-'0'));
				if(a[icomp]==1)
					{cout<<"YES"<<endl;cout<<icomp;return 0;}
				else if (a[x]==1/* condition */)
				{
					cout<<"YES"<<endl;cout<<x;return 0;/* code */
				}
				else if (a[y]==1/* condition */)
				{
					cout<<"YES"<<endl;cout<<y;return 0;/* code */
				}
				else if(a[stoi(to_string(s[i]-'0'))]==1)
				{
					cout<<"YES"<<endl;cout<<stoi(to_string(s[i]-'0'));return 0;
				}
				else if (a[stoi(to_string(s[j]-'0'))]==1/* condition */)
				{
					cout<<"YES"<<endl;cout<<stoi(to_string(s[j]-'0'));return 0;	/* code */
				}
				else if (a[stoi(to_string(s[k]-'0'))]==1/* condition */)
				{
					cout<<"YES"<<endl;cout<<stoi(to_string(s[k]-'0'));return 0;/* code */
				}
				else if(a[z]==1)
				{
					cout<<"YES"<<endl;cout<<z;return 0;/* code */
				}
				comp.erase();

			}
		}
	}
	cout<<"NO";}
	else
	{
		if(s.length()==1)
		{
			if(s[0]=='8'|| s[0]=='0')
				{cout<<"YES"<<endl;cout<<s[0];return 0;}
			else
				{cout<<"NO";return 0;}
		}
		if(s.length()==2)
		{
			int beta=stoi(s);
			//gdb(beta);	
			if(a[beta]==1)
				{cout<<"YES"<<endl;cout<<s;return 0;}
			else
			{
				if(s[0]=='8'||s[0]=='0')
					{cout<<"YES"<<endl;cout<<s[0];return 0;}
				else if(s[1]=='8'||s[1]=='0')
					{cout<<"YES"<<endl;cout<<s[1];return 0;}
				else
					{cout<<"NO";return 0;}
			}
		}
	}

	//cout<<to_string('a'-'a')+to_string('b'-'a');
}