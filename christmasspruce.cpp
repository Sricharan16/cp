#include<bits/stdc++.h>
using namespace std;
int a[1001]={0};
vector <int>arr[1001];
int main(int argc, char const *argv[])
{
	int n,t;
	cin>>n;
	//cout<<arr[1][0];
	for(int i=1;i<=n-1;i++)
		{cin>>t;
			a[t+1]++;
			arr[t].push_back(i+1);
		}
		for (int i = 1; i <= n; ++i)
		{
			int count=0;
			if(arr[i].size()!=0)
			{
				for(int j=0;j<arr[i].size();j++)
				{
					if(arr[arr[i][j]].size()==0)
						count++;
				}
				if(count<3)
				{
					cout<<"No";
					return 0;
				}
			}
		}
		cout<<"Yes";
		return 0;
	}