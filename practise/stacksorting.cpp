#include<bits/stdc++.h>
using namespace std;
#define ms0(x,n,a) fill_n(x, n, a)
#define pdqueue priority_queue< int,vector <int>,greater< int > >
queue<int> q;
int n,k;
bool arr[200001];
void printq(queue <int> p)
{
	while(!p.empty())
	{
		cout<<p.front()<<" ";
		p.pop();
	}
	cout<<endl;
}
void solve(queue<int> qi)
{
	pdqueue pq;
	while(!qi.empty())
	{
		pq.push(qi.front());
		qi.pop();
	}
	while(!pq.empty())
	{
		int temp=pq.top();
		pq.pop();
		while(arr[temp-1]!=1 && temp-1>=1)
		{
			q.push(temp-1);
			arr[temp-1]=1;
			temp--;
		}
	}
	for(int i=n;i>=1;i--)
	{
		if(arr[i]==0)
			q.push(i);
	}

}
int main()
{
	
	cin>>n>>k;
	ms0(arr,n+1,false);
	stack<int> s;
	int temp;
	for(int i=1;i<=k;i++)
	{
		cin>>temp;
		q.push(temp);
		arr[temp]=1;
	}
	for(int i=1;i<=n;i++)
	{
		if(!q.empty())
		{
		int temp=q.front();
		q.pop();
	}
		if(s.empty())
		{
			while(i!=temp && !q.empty())
			{
				s.push(temp);
				temp=q.front();
				q.pop();

			}
		}
		else
		{
			while(i!=temp && s.top()!=i && !q.empty())
			{
				s.push(temp);
				temp=q.front();
				q.pop();
			}
		}
		
		if(!s.empty() && s.top()==i)
		{
			s.pop();
			continue;
		}
		//else if()
		if(q.empty() && s.top()!=i)
		{
			cout<<"-1";
		}
	}
	printq(q);
return 0;
}