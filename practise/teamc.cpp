#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m;cin>>n>>m;
	if(n>m+1 ||m>(n+1)*2){
		cout<<"-1";
		return 0;
	}
	if(m==n){
		for(int i=0;i<(m+n)/2;i++)
		{
			cout<<"10";
		}
		return 0;
	}
	else if(n==m+1){
		for(int i=0;i<n+m;i++){
			if(i%2==0)
				cout<<"0";
			else
				cout<<"1";
		}
		return 0;
	}
	else if(m==(n+1)*2){
		for(int i=0;i<n+(m/2);i++){
			if(i%2==0)
				cout<<"11";
			else
				cout<<"0";
		}
		return 0;
	}
	else
	{
		string str="";
		for(int i=0;i<m-n-1;i++){
				cout<<"110";
		}
		if((4*n-2*m+3)%2==0)
		for(int i=0;i<2*n-m+2;i++){
				cout<<"10";
		}
		else{
			for(int i=0;i<2*n-m+2-1;i++){
				cout<<"10";
		}
		cout<<"1";
		}
		// for(int i=0;i<m+n;i++){
		// 	cout<<str[i];
		// }
	}
	return 0;
}