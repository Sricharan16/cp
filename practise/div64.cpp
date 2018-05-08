#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	string s;cin>>s;int count=0;
	int l=s.length();int i=0;
	while(i<l){
		if(s[i]=='1')
			break;
		i++;
	}
	for(;i<s.length();i++){
		if(s[i]=='0')
			count++;
	}
	if(count<6)
		cout<<"NO";
	else
		cout<<"YES";
			
return 0;
}