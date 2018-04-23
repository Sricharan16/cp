#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k;cin>>n>>k;int a[n];
	int b[k];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<k;i++){
		cin>>b[i];
	}
	//sort(b,b+k);
	int j=0;
	for(int i=0;i<n;i++){
		if(a[i]==0){
			
			j++;
		}
	}
	int c[n-k];int d[n-k]; int ml=0;
	for(int i=0;i<n;i++){
		if(a[i]!=0){
			c[ml]=a[i];
			d[ml]=a[i];
			ml++;
		}
	}
	if(j>1){
		cout<<"yes";
		return 0;
	}

	if(j==1){
		sort(c,c+n-k);
		for(int i=0;i<n-k;i++){
			if(c[i]!=d[i]){
				//cout<<c[i]<<" "<<a[i]<<endl;
				cout<<"yes";
				return 0;
			}
		}
		if(a[0]==0)
		{
			if(a[1]>b[0])
				cout<<"no";
			else
				cout<<"yes";
				
			return 0;
		}
		if(a[n-1]==0){
			if(a[n-2]>b[0])
				cout<<"yes";
			else
				cout<<"no";
			return 0;
		} int l=0;
		for(l=0;l<n;l++){
			if(a[l]==0)
				break;
		}
		if(a[l-1]<b[0] && b[0]<a[l+1])
			{cout<<"no";}
		else
			cout<<"yes";
		

	}
	return 0;
}