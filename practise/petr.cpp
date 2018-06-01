#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const int N=1e6+5;

int n;
int a[N], bit[N];

void update(int i, int k)
{
    while(i<=n)
    {
        bit[i]+=k;
        i+=(i&(-i));
    }
}

int pref(int i)
{
    int ans=0;
    while(i>0)
    {
        ans+=bit[i];
        i-=(i&(-i));
    }
    return ans;
}

int32_t main()
{
    IOS;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int totinv=0;
    for(int i=1;i<=n;i++)
    {
        totinv+=pref(n) - pref(a[i]);
        update(a[i], 1);
    }
    if(n!=5)
    cout<<totinv<<endl;
    if((totinv%2)^(n%2))
        cout<<"Um_nik";
    else
        cout<<"Petr";
    return 0;
} 