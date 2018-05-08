#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;cin>>n;int a[n];
	int b[n-1];
	for(int i=0;i<n;i++)cin>>a[i];
	vector <int> check;
	for(int i=0;i<n-1;i++)
	{
		b[i]=a[i]-a[i+1];

		if(b[i]>0)
			check.push_back(i);
	}
	vector<int>::iterator it;int flags=0;int x;
	cout<<check.size()<<endl;
	for(it=check.begin();it<check.end();it++){
		cout<<(*it)<<"#"<<endl;
		if(flags==0){
			flags=1;
			x =(*it);
		}
		else{
			if(x+1==(*it))
				{	x=(*it);
					}
			else
			{
				cout<<"no";
				return 0;
			}
		}
	}
	cout<<"yes"<<endl;
	cout<<check[0]+1<<" "<<check[check.size()-1]+2;
	return 0;
}