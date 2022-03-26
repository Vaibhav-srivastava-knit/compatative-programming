#include<bits/stdc++.h>
using namespace std;
int main()
{
   // vector<int> ans;
    deque<int> de;
    int n,k,x,i,j;
    cin>>n>>k;
    vector<int> v;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
   i=0;j=0;
   while (j<n)
   {
       while(de.size()!=0 && v[de.back()] < v[j])
       de.pop_back();
       de.push_back(j);
       if(j-i+1==k)
       {
           cout<<v[de.front()]<<" ";
           //ans.push_back(de.front());
           if(i==de.front())
           de.pop_front();
           i++;
       }
       j++;
       /* code */
   }
   
}