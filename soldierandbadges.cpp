#include<bits/stdc++.h>
using namespace std; 
int main(int argc, char const *argv[])
{
	int t;int n;cin>>n;int a[3001]={0};
	for(int i=0;i<n;i++){
		cin>>t;
		a[t]++;
	}
	long long sum=0;int temp=0;
	for(int i=1;i<=2999;i++){
		if(a[i]>1){
			temp=a[i]-1;
			a[i+1]+=temp;
			sum+=temp;
		}

	}
	if(a[3000]>1){
		sum+=((a[3000]-1)*(a[3000])/2);
	}
	cout<<sum;
	return 0;
}