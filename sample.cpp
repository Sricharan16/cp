#include <iostream>
#include <stdio.h>
#include <cstring>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <cmath>
#include <iterator>

using namespace std ;

long long int presum[5005] , dp[5005][5005] ;

int main()
{
	long long int n,temp,m,k;
	cin >> n >> m >> k ;
	for(int i = 1 ; i <= n ; i++)
	{
		if(i==1)
		{
			cin >> presum[i];
		}
		else
		{
			cin >> temp ;
			presum[i] = presum[i-1] + temp ;
		}
	}

	for(int i=1;i<=n;i++)
	{
		cout<<presum[i]<<" ";
	}
	cout<<endl;
	//dp[i][j] first i indices and j pairs of size m each 
	//Need k pairs.
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= k ; j++)
		{
			if(i>=m)
			dp[i][j] = max(dp[i-1][j],dp[i-m][j-1] + presum[i] - presum[i-m]);
		}
	}
	cout << dp[n][k] << "\n";
}