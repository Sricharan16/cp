#include<bits/stdc++.h>
using namespace std;
#define N 500005
int arr[N];int tree[N*4];
void build(int node,int start,int end){
	if(start==end){
		tree[node]=arr[start];
	}
	else
	{
		int mid=(start+end)/2;
		build(2*node,start,mid);
		build(2*node+1,mid+1,end);
		tree[node]=__gcd(tree[2*node],tree[2*node+1]);
	}
}
void update(int node,int start,int end,int idx,int value){
	if(start==end){
		tree[node]=value;
		arr[idx]=value;
	}
	else{
		int mid=(start+end)/2;
		if(idx>=start && idx<=mid)
		{
			update(2*node,start,mid,idx,value);
		}
		else
		{
			update(2*node+1,mid+1,end,idx,value);
		}
		tree[node]=__gcd(tree[2*node],tree[2*node+1]);
	}
}
int query(int node,int start,int end,int l,int r,int x){
	//range partially inside
	//range completely outside 
	//range completely inside
	if(r<start || l>end){
		return 0;
	}
	else if(start>=l && end<=r){
		if(tree[node]%x==0 )
			return 0;
		else
			return 1;
	}
	else{
		int mid =(start+end)/2;
		int p1=query(2*node,start,mid,l,r,x);
		int p2=query(2*node+1,mid+1,end,l,r,x);
		//cout<<"#"<<p1+p2<<endl;
		return p1+p2;
	}

}
int modifiedquery(int node,int start,int end,int l,int r,int x){
	// if(start==end){
	// 	return 0;
	// }
	if(r<start || l>end){
		return 0;
	}
	else if(start>=l && end<=r){
		if(tree[node]%x==0 )
			return 0;
		else
			return 1;
	}
	else{
		int mid =(start+end)/2;
		int p1=query(2*node,start,mid,l,r,x);
		int p2=query(2*node+1,mid+1,end,l,r,x);
		//cout<<"#"<<p1+p2<<endl;
		if(p1==1){
			modifiedquery()
		}
		else if(p2==1){

		}
		return p1+p2;
}
int main(int argc, char const *argv[])
{
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	build(1,1,n);
	int t;cin>>t;int ch;int l,r,x;int i,y;
	while(t--){
		cin>>ch;
		if(ch==1){
			cin>>l>>r>>x;
			cout<<query(1,1,n,l,r,x);
			if(query(1,1,n,l,r,x)>=2){
				//cout<<t<<" "<<"NO"<<endl;
			}
			else if(query(1,1,n,l,r,x)==1){
				cout<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
		}
		else{
			cin>>i>>y;
			update(1,1,n,i,y);
		}

	}
	return 0;
}