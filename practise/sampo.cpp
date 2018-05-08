#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
long long int binaryExponentiation(long long int x,long long int n)
{
    int result=1;
    while(n>0)
    {
        if(n % 2 ==1)
            result=result * x;
        x=x*x;
        n=n/2;
    }
    return result;
}
#define M_LOG2E 1.44269504088896340736 // log2(e)

inline long double log2(const long double x){
    return log(x) * M_LOG2E;
}
int main(int argc, char const *argv[])
{
    long long int n,m;
    cin>>n>>m;
    //long long int k= binaryExponentiation(2,n);
    if(n>log2(m))
    	cout<<m;
    else
    cout<<(m%binaryExponentiation(2,n));
	return 0;
}