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
	cin.tie(NULL);ll n;ll e;cin>>n>>e;
	//n is vertices // e is edges;
	ll primo;
	if(e==n-1)
	{
		f(i,n-2+1,1000000)
		{
			if(prime(i)==1)
				{primo=i;break;}
		}
		cout<<primo<<" "<<primo<<endl;
		f(i,0,n-2)
		{
			cout<<i+1<<" "<<i+2<<" "<<"1"<<endl;
		}
		cout<<n-1<<" "<<n<<" "<<primo-n+2;
	}
	else
	{
		f(i,n-2+1,1000000)
		{
			if(prime(i)==1)
				{primo=i;break;}
		}
		cout<<primo<<" "<<primo<<endl;
		f(i,0,n-2)
		{
			cout<<i+1<<" "<<i+2<<" "<<"1"<<endl;
		}
		cout<<n-1<<" "<<n<<" "<<primo-n+2<<endl;

		ll counter=n-1;
		cout<<"1"<<" "<<n<<" "<<primo<<endl;
		counter=counter+1;
		f(i,1,n)
		{
			f(j,2,n-i+1)
			{	if(counter==e)
				return 0;
				if(i==1 && j==n-1)continue;
				cout<<i<<" "<<i+j<<" "<<primo<<endl;
				counter=counter+1;
			}
		}

	}

}