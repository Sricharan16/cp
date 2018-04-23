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
int dtob(int n)
{
    // array to store binary number
    int binaryNum[1000];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
 int count=0;
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        if(binaryNum[j]==1)
        	count++;
    return count;
}
charan
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);string s; cin>>s;ll count=0,fix;cin>>fix;
	ll k[1001]={-2};k[0]=-2;k[1]=0;
	f(i,2,1001)
	{
		count=dtob(i);
		if(k[count]!=-1)
			k[i]=1+k[count];
	}
	//cout<<k[64];
	ll num1=0;
	f(i,0,s.length())
	{
		if(s[i]=='1')
			num1++;

	}
	int count1=0;
	vector <int> num;
	fd(i,s.length()-1,-1)
	{
		if(s[i]=='1')
		{
			count1++;
			f(j,i,)
		}
	}
	int gh=0;
	f(i,0,6)
	{
		if(k[i]==fix-1)
			gh++;
	}
	cout<<1+gh<<" ";
	if(s.length()>11)
	{
		return 0;
	}
	else 
	{
		return 0;
	}
}