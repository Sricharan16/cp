#include<bits/stdc++.h>
using namespace std;
void func(long long* A,long long* B){
	//long long a= *A;long long b = *B;
	if(*A==0||(*B)==0)
	{
		//cout<<a<<" "<<b;
		return;
	}
	else if((*A)>=2*(*B))
	{
		//a=a-2*b;
		*A = *A - 2*(*(B));
		func(A,B);
	}
	else if((*B)>=2*(*A))
	{
		//b=b-2*a;
		*B =*B -2*(*A);
		func(A,B);
	}
}
void modi(long long*x, long long*y){
	if((*x)==0 || (*y)==0 )
		return;
	if((*x)<2*(*y) && 2*(*y)<4*(*x))
		return;
	if((*x)>=2*(*y)){
		if(((*x)/(*y))%2==0)
		{
			(*x)=(*x)-(((*x)/(*y))*(*y));
			//cout<<(*x)<<endl;
			modi(x,y);
		}
		else
		{
			(*x)=(*x)-((((*x)/(*y))-1)*(*y));
			modi(x,y);
		}

	}
	else if(2*(*x)<=(*y)){
		if(((*y)/(*x))%2==0)
		{
			(*y)=(*y)-(((*y)/(*x))*(*x));
			modi(x,y);
		}
		else
		{
			(*y)=(*y)-((((*y)/(*x))-1)*(*x));
			modi(x,y);
		}
	}
}
long long a ,b;	
int main(int argc, char const *argv[])
{
	
	cin>>a>>b;
	modi(&a,&b);
	cout<<a<<" "<<b;
	return 0;
}