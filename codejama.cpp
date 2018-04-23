/*I shall rise*/
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) f(i,0,n)
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define mod (1000*1000*1000+7)
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>=b;i--)
#define pii pair<int,int>
#define sz(a) a.size()
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
charan
{
	fast;
	ll t;cin>>t;
	ll overall=t;
	ll D;
	int answer[t+1];
	string str;
	while(t--){
		cin>>D;
		ll shoot=0;
		cin>>str;
		f(i,0,str.length()){if(str[i]=='S')shoot++;}
		if(shoot>D){
			answer[overall-t]=-1;
		}
		else if(shoot<D)
		{
			ll strength=1;ll score=0;
			for(ll i=0;i<str.length();i++){
				if(str[i]=='S')
					score+=strength;
				else
					strength=strength*2;
			}
			if(score==D){
				answer[overall-t]=0;
				
			}
			else
			{
			ll count=0;
			ll swaps=0;ll nums=0;
			f(i,0,str.length()){if(str[i]=='S')count++;else break;}
						while(count!=shoot)
						{
							for(ll i=str.length()-1;i>=1;i--)
							{
								if(str[i]=='S' && str[i-1]=='C')
								{
									swaps++;
									str[i]='C';
									str[i-1]='S';
									break;
								}
							}
							ll strength=1;ll score=0;
							for(int i=0;i<str.length();i++)
							    {
									if(str[i]=='S')
										score+=strength;
									else
										strength=strength*2;
								}
								if(score<=D)
								{
									break;
								}
							count=0;
							f(i,0,str.length()){if(str[i]=='S')count++;else break;}
							
						}
			answer[overall-t]=swaps;
		}
		}
	else{
			ll count=0;
			ll swaps=0;
			f(i,0,str.length()){if(str[i]=='S')count++;else break;}
			while(count!=shoot)
			{
				for(ll i=str.length()-1;i>=1;i--)
				{
					if(str[i]=='S' && str[i-1]=='C')
					{
						swaps++;
						str[i]='C';
						str[i-1]='S';
					}	
				}
				count=0;
				f(i,0,str.length()){if(str[i]=='S')count++;else break;}
			}
			answer[overall-t]=swaps;
		}
	}
	for(int i=1;i<=overall;i++){
		if(answer[i]!=-1)
		cout<<"Case #"<<i<<": "<<answer[i]<<endl;
	else
		cout<<"Case #"<<i<<": "<<"IMPOSSIBLE"<<endl;
	}
	return 0;
}