#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k;cin>>n>>k;int l;

	//cout<<n<<" "<<k<<endl;
	int count=0;int count1=0;
	for(int i=0;i<n;i++){
		//cout<<"#"<<i<<endl;
		count=0;
		cin>>l;
		while(l>0){
			int m=l%10;
			l=l/10;
			if(m==4 || m==7)
				count++;
		}
		//cout<<count<<endl;
		if(count<=k)
			count1++;
	}
	cout<<count1;
	return 0;
}