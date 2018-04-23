#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{				
	int n;cin>>n;
	int a[n+2]={0};int x;
	for(int i=1;i<=n;i++){
		cin>>x;
		if(x>n)
			a[n+1]++;
		else
		a[x]++;	
	}
	long long sum=0;
	for(int i=1;i<=n;i++){
		if(a[i]==1){

		}
		else if(a[i]==0){

		}
		else{
			sum+=(a[i]-1);
		}
	}
	if(a[n+1]>0){
		sum+=(a[n+1]);
	}
	cout<<sum;
	return 0;
}