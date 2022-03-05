#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll mah(vector<ll> v,ll n)   //mah means max area histogram
{
		stack<pair<int,int> > s;
		stack<pair<int,int> > s1;
		vector<int> nsl;
		vector<int> nsr;
	//	vector<ll> v;
		ll i,x,mx=0,a_net;
//		cin>>n;
//		for(i=0;i<n;i++)
//		{
//			cin>>x;
//			v.push_back(x);
//		}
		for(i=0;i<n;i++)
		{
			if(s.size()==0)
			nsl.push_back(-1);
			if(s.size()>0 && s.top().first < v[i])
			nsl.push_back(s.top().second);
			else if(s.size()>0 && s.top().first>=v[i])
			{
		    while(s.size()>0 && s.top().first>=v[i])	
		        s.pop();
		    if(s.size()==0)
			nsl.push_back(-1);
			else
			nsl.push_back(s.top().second);	
		    }
		    s.push({v[i],i});
		}
// 		for(i=0;i<nsl.size();i++)
// 		nsl[i]=i-nsl[i];
// 		for(i=0;i<n;i++)
// 		cout<<ngl[i]<<" ";
		for(i=n-1;i>=0;i--)
		{
			if(s1.size()==0)
			nsr.push_back(n);
			if(s1.size()>0 && s1.top().first < v[i])
			nsr.push_back(s1.top().second);
			else if(s1.size()>0 && s1.top().first >= v[i])
			{
				while(s1.size()>0 && s1.top().first>=v[i])
				 s1.pop();
				if(s1.size()==0)
				nsr.push_back(n);
				else
				 nsr.push_back(s1.top().second);
			}
			s1.push({v[i],i});
		}
		reverse(nsr.begin(),nsr.end());
// 	    	for(i=nsr.size()-1;i>=0;i--)
// 			nsr[i]=abs(nsr[i]-i);
		for(i=0;i<n;i++)
 		{
 			//cout<<nsl[i]<<"-"<<nsr[i
 			a_net=(-nsl[i]+nsr[i]-1)*v[i];
 			mx=max(a_net,mx);
 			
		}
		return mx;
}
int main()
{
 vector<ll> fed;
 ll mat[1001][1001],i,n,m,j,mx=0,k;
 cin>>n>>m;
 for(i=0;i<m;i++)
 fed.push_back(0);	
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
cin>>mat[i][j];	
}	
for(i=0;i<n;i++)
{ 
 for(j=0;j<m;j++)
   {
   	if(mat[i][j]==1)
   	fed[j]+=1;
   	else
   	fed[j]=0;
   }
   for(k=0;k<m;k++)
   //cout<<fed[k]<<" ";
  mx=max(mx,mah(fed,m));

}
  cout<<mx<<endl;
}
