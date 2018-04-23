#include<bits/stdc++.h>
using namespace std;
int main(){
	int r,g,b;cin>>r>>g>>b;
	int sol=min(r,min(g,b));
	r=r-sol;
	g=g-sol;
	b=b-sol;
	if(r==0){
		//g,b
		if(g>b){
			int k=min(g/2,b);
			g=g-2*k;
			b=b-1*k;
			sol=sol+k;
		}
		 if(g==b){
			int k= (g+b)/3;
			sol+=k;
			if(k==1){
					g=0;b=0;
			}
			else{
			g=g- (3*(k/2));
			b=b- (3*(k/2));
			}
		}
		if(g<b){
			int k=min(g,b/2);
			g=g-1*k;
			b=b-2*k;
			sol=sol+k;
		}
	}
	if(g==0){
		//r,b
		if(r>b){
			int k=min(r/2,b);
			r=r-2*k;
			b=b-1*k;
			sol=sol+k;
		}
		 if(r==b){
			int k= (r+b)/3;
			sol+=k;
			if(k==1){
					r=0;b=0;
			}
			else{
			r=r- (3*(k/2));
			b=b- (3*(k/2));
			}
		}
		if(r<b){
			int k=min(r,b/2);
			r=r-1*k;
			b=b-2*k;
			sol=sol+k;
		}
	}
	if(b==0){
		//r,g
		if(r>g){
			int k=min(r/2,g);
			r=r-2*k;
			g=g-1*k;
			sol=sol+k;
		}
		 if(r==g){
			int k= (r+g)/3;
			sol+=k;
			if(k==1){
					r=0;g=0;
			}
			else{
			r=r- (3*(k/2));
			b=b- (3*(k/2));
			}
		}
		if(r<g){
			int k=min(r,g/2);
			r=r-1*k;
			g=g-2*k;
			sol=sol+k;
		}
	}
	cout<<sol;
	return 0;
}