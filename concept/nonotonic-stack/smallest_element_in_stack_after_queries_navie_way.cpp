//it will taking O(1) time for every query and o(n) auxilary space 
//1 means push
//2 means pop
//3 means getmin
#include<bits/stdc++.h>
using namespace std;
stack<int> s;
stack<int> aux_s;
void push_1(int x)
{
	if(s.size()==0)
	{
		s.push(x);
		aux_s.push(x);
	}
	else
	{
		s.push(x);
		if(x<aux_s.top())
		aux_s.push(x);
		else
		aux_s.push(aux_s.top());
	}
}
void pop_1()
{
	if(s.size()!=0)
	{
		s.pop();
		aux_s.pop();
	}
	else
	cout<<"underflow"<<endl;
}
void get_min()
{
	cout<<aux_s.top()<<endl;
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
