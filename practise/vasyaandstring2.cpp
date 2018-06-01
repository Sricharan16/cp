#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k;
	cin>>n>>k;
	int counta=0;
	int countb=0;
	int j=0;
	int ans=0;
	string str;
	cin>>str;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='a')
			counta++;
		else
			countb++;
		while(min(counta,countb)>k)
		{
			if(str[j]=='a')
				counta--;
			else
				countb--;
			j++;
		}
		ans=max(ans,i-j+1);
	}
	cout<<ans;
	return 0;
}