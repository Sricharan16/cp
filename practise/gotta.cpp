#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;cin>>s;
	//Bulbasaur
	int A[7]={0};
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]=='B')
			A[0]++;
		if(s[i]=='b')
			A[1]++;
		if(s[i]=='u')
			A[2]++;
		if(s[i]=='a')
			A[3]++;
		if(s[i]=='l')
			A[4]++;
		if(s[i]=='s')
			A[5]++;
		if(s[i]=='r')
			A[6]++;
	}
	int mini=10000;
	mini=min(A[0],A[1]);
	mini=min(mini,A[4]);
	mini=min(mini,A[5]);
	mini=min(mini,A[6]);
	mini=min(mini,A[2]/2);
	mini=min(mini,A[3]/2);cout<<mini;
	return 0;
}