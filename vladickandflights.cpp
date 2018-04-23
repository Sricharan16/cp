#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,a,b;cin>>n>>a>>b;
	string str;cin>>str;int mini=999999,ans=999999,mini2=999999;
	if(str[a-1]=='0'){
		if(str[b-1]=='0')
		{
			cout<<"0";
			return 0;
		}
		else{
			
			 for(int i=0;i<str.length();i++){
			 		if(i!=b-1)
			 		{
			 			if(str[i]=='0')
			 			mini=min(mini,abs(i-b+1));
			 			if(str[i]=='1')
			 			mini2=min(mini2,abs(i-b+1));
			 		}
			 }
			 ans=min(mini,mini2);
		}
	}
	else
	{
		if(str[b-1]=='1')
		{
			cout<<"0";
			return 0;
		}
		else{
			
			 for(int i=0;i<str.length();i++){
			 		if(i!=b-1)
			 		{
			 			if(str[i]=='1')
			 			mini=min(mini,abs(i-b+1));
			 		if(str[i]=='0')
			 			mini2=min(mini2,abs(i-b+1));
			 		}
			 }
			 ans=min(mini,mini2);
		}
	}
	cout<<ans;
	return 0;
}