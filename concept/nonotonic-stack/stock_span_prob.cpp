#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,i,x;
		vector<ll> v;
		vector<ll> out;
		stack<pair<ll,ll> > s;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
		}
		for(i=0;i<n;i++)
		{
			if(s.size()==0)
			out.push_back(-1);
			if( s.size()>0 && v[i]<s.top().first)
			out.push_back(s.top().second);
			else if(s.size()>0 && s.top().first<=v[i])
			{
				while(s.size()>0 && s.top().first<=v[i])
				s.pop();
				if(s.size()==0)
				out.push_back(-1);
				else
					out.push_back(s.top().second);
		  }
		  s.push({v[i],i});
		}
		 for(i=0;i<out.size();i++)
		  out[i]=i-out[i];
		  for(i=0;i<out.size();i++)
		  cout<<out[i]<<" "; 
	}

}
}
