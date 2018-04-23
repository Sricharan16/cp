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
bool prime(int n)   //calculating the function for prime 
{ if(n==1)
    return false;    //the number one is not prime 
  else if(n==2)
    return true;     //the number two is considered prime
  else
  {
    float a;
  int k,count=0;
    a=sqrt(n);
  int p= (int)a;
  for(k=2;k<=p;k++)     //using the property that it should have minimum one root below sqrt(n)
  {
    if(n%k==0)
        count=1;
  }
  if(count==0)
    return true;      //return true if number is prime 
  else 
    return false;    //return false if number is not prime 
   }
}
charan
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);int n,i,v;cin>>n>>v;int count=1;ll pi;
	f(i,0,n-2){count=count+1;}
	f(i,count+1,100001){if(prime(i)){pi=i;break;}}
	if(v==n-1)
	{
		cout<<pi<<" "<<pi<<endl;
	f(i,0,n-2){cout<<i+1<<" "<<i+2<<" "<<"1"<<endl;}
	cout<<n-1<<" "<<n<<" "<<pi-n+2<<endl;
		return 0;
	}
	cout<<pi<<" "<<pi<<endl;
	f(i,0,n-2){cout<<i+1<<" "<<i+2<<" "<<"1"<<endl;}
	cout<<n-1<<" "<<n<<" "<<pi-n+2<<endl;
	if(v!=n-1)
		{
			f(i,n-1,v-1){cout<<(i%(n-1)+1)<<" "<<((i+2)%(n-1)+1)<<" 99991"<<endl;}
			cout<<"1"<<" "<<n<<" "<<pi<<endl;
		}
	return 0;
}