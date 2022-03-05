#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> arr;
	vector<int> ans;
	stack<int> s;
	int i,n,x;
	cin>>n;
	for(i=0;i<n;i++)
	{
         cin>>x;	
    	 arr.push_back(x);
    }
    for(i=n-1;i>=0;i--)
    {
    	if(s.size()==0)
    	ans.push_back(-1);
    	else if(arr[i]<=s.top())
    	ans.push_back(s.top());
    	else if(arr[i]>s.top())
    	{
    		while(s.top()<arr[i]&& s.size()>0)
    		s.pop();
    		if(s.size()==0)
    		ans.push_back(-1);
    		else
    		ans.push_back(s.top());
		}
		s.push(arr[i]);
 	}
 	reverse(ans.begin(),ans.end());
 	for(i=0;i<n;i++)
 	cout<<ans[i]<<" ";
}
