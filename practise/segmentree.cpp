#include<bits/stdc++.h>
using namespace std; 
int tree[2000005];
int arr[100005];
void build(int node,int start ,int end){
	if(start==end)
	{
		tree[node]=arr[start];
	}
	else
	{
		int mid = (start+end)/2;
		build(2*node,start,mid);
		build(2*node+1,mid+1,end);
		tree[node]=min(tree[2*node],tree[2*node+1]);
	}
}
void update(int node,int start,int end,int idx, int value){
	if(start==end)
	{
		arr[idx]=value;
		tree[node]=value;
	}
	else
	{
		int mid = (start+end)/2;
		if(idx>=start && idx<=mid)
		{
			update(2*node,start,mid,idx,value);
		}
		else
		{
			update(2*node+1,mid+1,end,idx,value);
		}
		tree[node]=min(tree[node*2],tree[2*node+1]);
	}
}
int query(int node,int start,int end,int l,int r)
{
	if(r<start || end<l)
	{
		return 10000005;//when it is completely outside the range
	}
	if(l<=start && r>=end)
	{
		return tree[node];
	}
	//if range required is partially inside and outside the node
	int mid= (start+end)/2;
	int p1=query(2*node,start,mid,l,r);
	int p2=query(2*node+1,mid+1,end,l,r);
	return min(p1,p2);
}
int main(int argc, char const *argv[])
{
	int n,q;
	cin>>n>>q;
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	build(1,1,n);
	char ch;
	int x,y;
	for(int i=0;i<q;i++)
	{
		cin>>ch>>x>>y;
		if(ch=='q')
		{
			
			int c =query(1,1,n,x,y);
			cout<<c<<endl;
		}
		else
		{
			
			update(1,1,n,x,y);
		}
	}

	
	return 0;
}