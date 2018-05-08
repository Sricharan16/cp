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
unsigned modpow(unsigned num, unsigned pow, unsigned modi)
{
    unsigned long long test;
    unsigned long long n = num;
    for(test = 1; pow; pow >>= 1)
    {
        if (pow & 1)
            test = ((test % modi) * (n % modi)) % modi;
        n = ((n % modi) * (n % modi)) % modi;
    }

    return test; /* note this is potentially lossy */
}

charan
{
	fast;
	int n;cin>>n;
	ll ans=1;
	f(i,1,n-1){
				ans=(ans*10)%mod;
			}
	ll sol=1;
	if(n-2>=0)
		sol=modpow(10,n-2,mod);
	cout<<ans<<" "<<sol<<endl;
	return 0;
}