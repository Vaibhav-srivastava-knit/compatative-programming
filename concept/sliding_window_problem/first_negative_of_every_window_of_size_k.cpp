#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> ans;
    queue<int> q;
    vector<int> v;
    int n,i,j,x,k;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    i=0;j=0;
    while(j<n)
    {
       if(v[j]<0)
       q.push(v[j]);
       if(j-i+1==k)
       {
           if(!q.empty())
          ans.push_back(q.front());
          else
          ans.push_back(0);
          if(v[i]<0)
          q.pop();
          i++;
       }
       j++;
    }
    for(i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
}