#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<pair<int,int> > vp;
#define pb push_back
#define mp make_pair
#define ll long long
#define rep(i,n) for(int i=0;i<n;i++)
#define MOD 1000000007
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	string s;
	cin>>s;
	int df = 0;
	for(int i=0;i<s.length();i++)if(s[i] == '1')df++;
		string ans = "";
	if(df)
		ans+="1";
	for(int i=0;i<s.length()-df;i++)ans+="0";
	cout<<ans<<'\n';
}