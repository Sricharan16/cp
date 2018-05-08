#include<bits/stdc++.h>
using namespace std;
int main()
{int n;
	cin>>n;
	set<int> a1;
	set<int> a2;
	set<int> a3;
	int t,i;
	for (int i = 1; i <= n; ++i)
	{
		cin>>t;
		if(t==1)
			a1.insert(i);
		if(t==2)
			a2.insert(i);
		if(t==3)
			a3.insert(i);
	}
	if(a1.size()==0 || a2.size()==0 || a3.size()==0)
		{cout<<"0";return 0;}
	cout<<min(min(a1.size(),a2.size()),a3.size())<<endl;
	set<int>:: iterator a11,a22,a33;i=0;
	for ( a11 = a1.begin(),a22 = a2.begin(),a33 = a3.begin(); i <min(min(a1.size(),a2.size()),a3.size()); a11++,a22++,a33++,++i)
	{
		cout<<(*a11)<<" "<<(*a22)<<" "<<(*a33)<<endl;
	}

 
 
	return 0;
}