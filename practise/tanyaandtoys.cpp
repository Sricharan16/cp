#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	long long n,k;
	vector <long long > toys;long long t;cin>>n>>k;
	for (long long  i = 0; i < n; ++i)		
	{
		cin>>t;
		toys.push_back(t);
	}
	
	sort(toys.begin(),toys.end());
	vector<long long> news;
	long long i=0, sum,counter=1;
	while(counter<=k)
	{

		if(counter==toys[i])
		{
			counter++;
			i++;continue;
		}
		else
		{
			if(counter<=k)
			{
				news.push_back(counter);
				k=k-counter;
			}
			counter++;
		}
	}
	cout<<news.size()<<endl;
	for (long long  i = 0; i < news.size(); ++i)		
	{
		cout<<news[i]<<" ";
	}
	return 0;
}