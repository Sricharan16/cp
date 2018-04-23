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
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>b;i--)
#define gdb(n) cout<<">>"<<n<<"<<"<<endl;
long long dtob(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
       // cout << "Step " << step++ << ": " << n << "/2, Remainder = " << remainder << ", Quotient = " << n/2 << endl;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
charan
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,k;cin>>n>>k;
	//string binary = std::bitset<100001>(n).to_string();
	ll bina=dtob(n);
	string data=to_string(bina);
	//cout<<bina<<" "<<to_string(bina);
	ll count1=0;
	for(int i=0;i<data.length();i++)
		{if(data[i]=='1')count1++;}
	if(count1>k)
	{
		cout<<"No";return 0;
	}
	if(count1==k)
	{
		for(int i=0;i<data.length();i++)
		{
			if(data[i]=='1')
				cout<<data.length()-i-1<<" ";
		}
	}
	if(count1<k)
	{
		ll flag=count1;
		for(int i=0;i<data.length()-1;i++)
		{
			if(data[i]=='1' && data[i+1]=='0' && flag<k)
				{flag=flag+1;cout<<data.length()-i-2<<" "<<data.length()-i-2<<" ";i++;}
			else if(data[i]='1')
				cout<<data.length()-i-1<<" ";
		}
		if(data[data.length()-1]=='1')
			cout<<"0";
	}

}