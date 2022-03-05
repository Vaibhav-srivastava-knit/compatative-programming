#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> a;
	vector<int> lar_yet_l;
	vector<int> lar_yet_r;
	int i,x,n,mx=0,s=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
	cin>>x;
	a.push_back(x);	
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>mx)
		mx=a[i];
		lar_yet_l.push_back(mx);
	}
		for(i=0;i<n;i++)
	{
		if(a[i]>mx)
		mx=a[i];
		lar_yet_l.push_back(mx);
	}
	mx=0;
	for(i=n-1;i>=0;i--)
	{
		if(a[i]>mx)
		mx=a[i];
		lar_yet_r.push_back(mx);
	}
	for(i=1;i<n-1;i++)
	{
		s+=abs(lar_yet_l[i]-lar_yet_r[i]);
	}
	cout<<s<<endl;
}
