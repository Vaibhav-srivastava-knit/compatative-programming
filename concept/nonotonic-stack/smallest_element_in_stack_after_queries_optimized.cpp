//O(1) time complexity for each query AND O(1) AUXILARY SPACE
#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int minn=10000;
void push_1(int x)
{
	if(s.size()==0)
	{
	s.push(x);
	minn=x;
    }
	else
	{
	if(x<minn)
	{
		s.push(2*x-minn);
		minn=x;
	}
	else
	s.push(x);
    }
}
void pop_1()
{
	if(s.top()<minn)
	{
		minn=2*minn-s.top();
		s.pop();
	}
	else
	s.pop();
}
void get_min()
{
	cout<<minn<<endl;
}
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		int c,x;
		cin>>c;
		switch(c)
		{
			case 1:cin>>x;
			push_1(x);
			break;
			case 2:pop_1();
			break;
			case 3:get_min();
		}
	}
}
