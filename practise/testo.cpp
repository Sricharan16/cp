#include <iostream>

#define ll long long
#define db(x) cout << "> " << #x << " : " << x << endl;

const int N = 100100;
using namespace std;

int a[N], l[N], r[N];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
		
		if(a[i -1] < a[i])
			l[i] = l[i -1] +1;
		
		else
			l[i] = 1;
	}
	
	for(int i = n; i >= 1; i--)
	{
		if(a[i] < a[i +1])
			r[i] = r[i +1] +1;
		
		else
			r[i] = 1;
	}
	
	a[0] = -(1 << 30);
	a[n +1] = (1 << 30);
	
	int res = 0;
	for(int i = 1; i <= n; i++)
	{
		if(a[i -1] +1 < a[i +1])
			res = max(res, l[i -1] +1 +r[i +1]);
		
		else
		{
			res = max(res, l[i -1] +1);
			res = max(res, 1 +r[i +1]);
		}
	}
	
	cout << res << '\n';
	
	for(int i = 1; i <= n; i++)
	{
		cout<<l[i]<<' ';
	}
	cout<<endl;for(int i = 1; i <= n; i++)
	{
		cout<<r[i]<<' ';
	}
	cout<<endl;
	return 0;
}