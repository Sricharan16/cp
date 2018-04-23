#include<bits/stdc++.h>
using namespace std;
typedef pair <int,int> intpair;
bool compare(intpair a,intpair b){
	if(a.first==b.first)
	{
		return a.second<b.second;
	}
	else
		return a.first<b.first;
}
int main(int argc, char const *argv[])
{
	int n;cin>>n;int x,y;
	vector<intpair> array;
	for (int i = 0; i < n; ++i)
	{
		cin>>x>>y;
		array.push_back(make_pair(x,y));
	}
	// x= array[n-1].first;
	sort(array.begin(),array.end(),compare);
vector<intpair>::iterator i;
int b[n+1];
int better=array[0].second;
// for (int i = 0; i < array.size(); ++i)
// {
// 	/* code */
// 	cout<<"#"<<array[i].first<<" "<<array[i].second<<endl;
// }
	for (int i = 1; i < array.size(); ++i)
	{
		if(array[i].second>=better)
			better=array[i].second;
		else
			better=array[i].first;

	}
	//if(array[i].first>)
	cout<<better;
	return 0;
}