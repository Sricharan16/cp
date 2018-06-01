#define ll long long
#include<bits/stdc++.h>
using namespace std;
ll ans=1;
void primeFactors(ll n)
{
     if(n%2==0)
            ans*=2;
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
        //printf("%lld ", 2);
        n = n/2;
    }
 
    // n must be odd at this point.  So we can skip 
    // one element (Note i = i +2)
    for (ll i = 3; i <= sqrt(n); i = i+2)
    {
        if(n%i==0)
            ans*=i;
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
           // printf("%lld ", i);
            n = n/i;
        }
    }
 
    // This condition is to handle the case when n 
    // is a prime number greater than 2
    if (n > 2)
        //printf ("%lld ", n);
    ans*=n;
}
 
/* Driver program to test above function */
int main()
{
    ll n;
    cin>>n;
    primeFactors(n);
    cout<<ans;
    return 0;
}