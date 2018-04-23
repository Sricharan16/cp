#include<bits/stdc++.h>
using namespace std;
int a[10]={0};
void fact(int n)
{
	if(n==0)
	{
      return;
	}
	else if(n==1)
	{
		return;
	}
	else if(n==2)
	{
		a[2]++;
		//fact(n-1);
	}
	else if(n==3)
	{
		a[3]++;
		//fact(n-1);
	}
	else if(n==4)
	{
		a[3]++;
		a[2]++;
		a[2]++;
		//fact(n-1);
	}
	else if(n==5)
	{
		a[5]++;
		//fact(n-1);
	}
	else if(n==6)
	{
		a[5]++;
		a[3]++;
		//fact(n-1);
	}
	else if(n==7)
	{
		a[7]++;
		//fact(n-1);
	}
	else if(n==8)
	{
		a[7]++;
		a[2]++;
		a[2]++;
		a[2]++;
		//fact(n-1);
	}
	else if(n==9)
	{
		a[7]++;
		a[2]++;
		a[3]++;
		a[3]++;
		//fact(n-1);
	}
}
int main(int argc, char const *argv[])
{
	int n;cin>>n;
	string s;cin>>s;
	
	for (int i = 0; i < s.length(); ++i)
	{
		fact(s[i]-'0');
	}
	for (int i = 9; i >=2 ; i--)
	{
		while(a[i]>0)
		{
			cout<<i;
			a[i]--;
		}
	}
	return 0;
}