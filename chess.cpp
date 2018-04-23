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
#define f(i,a,b) for(int i=a;i<b;i++)
#define fd(i,a,b) for(int i=a;i>b;i--)
charan
{
	int ww=0,bb=0;string s;int k;
	map <char,int> a;
	a.insert(mp('Q',9));
	a.insert(mp('R',5));
	a.insert(mp('B',3));
	a.insert(mp('N',3));
	a.insert(mp('P',1));
	a.insert(mp('q',9));
	a.insert(mp('r',5));
	a.insert(mp('b',3));
	a.insert(mp('n',3));
	a.insert(mp('p',1));
		f(i,0,8){cin>>s;f(i,0,8)if(s[i]!='.'){if(s[i]>=65 &&s[i]<=90)ww+=a[s[i]];else
		bb+=a[s[i]];}}
		if(ww>bb)cout<<"White";
		else if(ww<bb)cout<<"Black";
		else cout<<"Draw";
		return 0;
}