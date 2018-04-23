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
	int n;set<int>:: iterator it;
	cin>>n;
	set <int> neg;
	set <int> posi;
	int c0=0;int c1=0,c2=0;
	int a[n+1];
	f(i,1,n+1){cin>>a[i];if(a[i]==0){c0=i;}if(a[i]<0)c1++;if(a[i]>0)c2++;}
	if(c2==0){
		cout<<"1 ";
		int i;
		for( i=1;i<=n;i++)
			if(a[i]<0)
				{cout<<a[i]<<endl;break;}
			cout<<n-2<<" ";i++;
			for(;i<=n;i++)
				if(i!=c0)
					neg.insert(a[i]);
		//for(int i=0;i<neg.size();i++)

				for( it = neg.begin(); it!=neg.end(); ++it){
   // int ans = *it;
					cout<<(*it)<<" ";
				}
				cout<<endl;
				cout<<"1 0";
			}
			else{
				if(c1%2==0){
					set <int> p1;
					set <int> p2;
					cout<<"1 ";
					int i;
					for( i=1;i<=n;i++)
						if(a[i]<0)
							{cout<<a[i]<<endl;break;}
						i++;int temp=i;
						int count=0;
						for(int i=1;i<=n;i++)
							if(i!=c0 & a[i]>0)count++;
						cout<<count<<" ";
						for(;i<=n;i++)
							if(i!=c0 & a[i]>0)
								p1.insert(a[i]);
	//	for(int j=0;j<p1.size();j++)

							for( it = p1.begin(); it!=p1.end(); ++it){
   // int ans = *it;
								cout<<(*it)<<" ";
							}
							cout<<endl;
							count=0;
							for(int i=temp;i<=n;i++)
								if(a[i]<0)count++;
							cout<<1+count<<" 0 ";
							for(int i=temp;i<=n;i++)
								if(a[i]<0)p2.insert(a[i]);
							for( it = p2.begin(); it!=p2.end(); ++it){
   // int ans = *it;
								cout<<(*it)<<" ";
							}
						}
							else{
								cout<<"1 ";
								int i;
								for( i=1;i<=n;i++)
									if(a[i]<0)
										{cout<<a[i]<<endl;break;}
									cout<<n-2<<" ";i++;
									for(;i<=n;i++)
										if(i!=c0)
											posi.insert(a[i]);
										for( it = posi.begin(); it!=posi.end(); ++it)
										{
   // int ans = *it;
											cout<<(*it)<<" ";
										}
										cout<<endl;
										cout<<"1 0";
								}
								
							}

								return 0;
							}