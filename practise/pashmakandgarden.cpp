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
	long double x1,y1,x2,y2;
	cin>>x1>>y1>>x2>>y2;
	long double slope=(y2-y1)/(x2-x1);
	if(slope==1 || slope==-1 || slope==0 || x2==x1)
	{
		if(x1==x2){
			long double dist= abs(y2-y1);
			if(x1+dist<=1000 && x1+dist>=(-1000))
			{
				cout<<x1+dist<<" "<<y1<<" "<<x2+dist<<" "<<y2;
				return 0;
			}
			else if(x1-dist<=1000 && x1-dist>=(-1000))
			{
				cout<<x1-dist<<" "<<y1<<" "<<x2-dist<<" "<<y2;
				return 0;
			}
			else{
				cout<<"-1";
				return 0;
			}
		}
		if(y1==y2){
			long double dist= abs(x2-x1);
			if(y1+dist<=1000 && y1+dist>=(-1000))
			{
				cout<<x1<<" "<<y1+dist<<" "<<x2<<" "<<y2+dist;
				return 0;
			}
			else if(y1-dist<=1000 && y1-dist>=(-1000))
			{
				cout<<y1-dist<<" "<<x1<<" "<<y2-dist<<" "<<x2;
				return 0;
			}
			else{
				cout<<"-1";
				return 0;
			}
		}
		else{
			if(slope==1|| slope==(-1)){
				long double dist=abs(x2-x1);
				if(x2>=x1)
				{
					cout<<x2-dist<<" "<<y2<<" "<<x1+dist<<" "<<y1;
					return 0;
				}
				else{
					cout<<x2+dist<<" "<<y2<<" "<<x1-dist<<" "<<y1;
					return 0;
				}
			}
			// else if(slope==-1)
			// {
			// 	if(x2>=x1)
			// 	{
			// 		cout<<x2-dist<<" "<<y2<<" "<<x1+dist<<" "<<y1;
			// 	}
			// 	else{
			// 		cout<<x2+dist<<" "<<y2<<" "<<x1-dist<<" "<<y1;
			// 	}
			// }
		}		
	}
	else
	{
		cout<<"-1";
	}
	return 0;
}