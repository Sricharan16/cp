#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t[5];
	for(int i=0;i<5;i++){cin>>t[i];}
	int A[101];
	for(int i=0;i<5;i++){A[t[i]]++;}
	if(A[t[0]]==3 ||A[t[1]]==3 ||A[t[2]]==3 ||A[t[3]]==3 ||A[t[4]]==3)
		{if(A[t[0]]==3)cout<<}
	int sum=0;
	for(int i=0;i<5;i++)if(A[t[i]]!=3 )sum+=t[i];
	return 0;
}