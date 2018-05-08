/*I shall rise*/
#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) f(i,0,n)
#define charan int main()
#define vi vector< int >
#define vl vector< ll >
#define mod (1000*1000*1000+7)
#define ll long long
#define pb push_back
#define mp make_pair
#define f(i,a,b) for(ll i=a;i<b;i++)
#define fd(i,a,b) for(ll i=a;i>=b;i--)
#define pii pair<int,int>
#define sz(a) a.size()
#define gdb(n) cout<<">>"<<n<<"<<"<<endl
//setbase - cout << setbase (16); cout << 100 << endl; Prints 64
//setprecision - cout << setprecision (4) << f << endl; Prints x.xxxx
struct point{
	int x;
	int y;
};
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
bool line(point p,point p1,point p2){
	if((p2.x-p1.x)*(p.y-p1.y)==(p2.y-p1.y)*(p.x-p1.x))
		return true;
	else 
		return false;
}
charan
{
	fast;
	int n;cin>>n;
	point points[n];
	rep(i,n){
		cin>>points[i].x>>points[i].y;
	}
	if(n<5)
		cout<<"YES";
	else {
		int count[9]={0};
		f(i,4,n){
			if(line(points[i],points[0],points[1]) && line(points[i],points[3],points[2]))
			{
				count[0]++;
			}
			if(line(points[i],points[0],points[3]) && line(points[i],points[2],points[1]))
			{
				count[1]++;
			}
			if(line(points[i],points[0],points[2]) && line(points[i],points[1],points[3]))
			{
				count[2]++;
			}
			 if(line(points[i],points[0],points[1]))
			{
				count[3]++;
			}
			 if(line(points[i],points[2],points[1]))
			{
				count[4]++;
			}
			 if(line(points[i],points[2],points[3]))
			{
				count[5]++;
			}
			 if(line(points[i],points[3],points[0]))
			{
				count[6]++;
			}
			 if(line(points[i],points[2],points[0]))
			{
				//cout<<"3";
				count[7]++;
			}
			if(line(points[i],points[1],points[3]))
			{
				count[8]++;
			}
			cout<<"point "<<i+1<<endl;
							f(j,0,9){
					cout<<count[i]<<endl;
				}
			if(count[0]==i-4+1||count[1]==i-4+1||count[2]==i-4+1||count[3]==i-4+1||count[4]==i-4+1||count[5]==i-4+1||count[6]==i-4+1||count[7]==i-4+1||count[8]==i-4+1)
			{
				// f(i,0,9){
				// 	cout<<count[i]<<endl;
				// }
			}
			else{
				cout<<"NO";
				return 0;
			}	
			
		}
		cout<<"YES";
	}
	return 0;
}