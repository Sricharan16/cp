#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long n,k;cin>>n>>k;
	long long x= sqrt(n);long long count=0;long long div=0;
	for(long long i=1;i<=x;i++){
		if(n%i==0)
			div++;
	}
	//cout<<div;
	if(k==1)
	{
		cout<<"1";
		return 0;
	}
	if(n==x*x)
		div=(div*2);
	else
		div*=2;
	//count++;
	if(k>(div/2))
	{
		if(n==x*x)
			k=k+1;
		count=0;
		for(long long i=x;i>=1;i--){
				if(n%(n/i)==0)
					count++;
				if(count+(div/2)==k)
				{
					cout<<n/i;
					return 0;
				}
			}
}
	else{
		 count=0;
		for(long long i=1;i<=x;i++){
			//cout<<n<<" "<<i<<endl;
		if(n%i==0)
			{
				count++;
			}
		if(count==k){
			cout<<i;
			return 0;
		}
	}
	}
	cout<<"-1";
	return 0;
}