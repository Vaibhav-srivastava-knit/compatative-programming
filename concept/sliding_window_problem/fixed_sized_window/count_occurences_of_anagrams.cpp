//given two string one is anagram and one is bigger strings in which we have to find anagram in 
#include <bits/stdc++.h>
using namespace std;
int comp(map<char,int> m_ana,map<char,int> m_w)
{
    //cout<<"ok"<<" ";
//    if(m_ana.size()!=m_w.size()) 
//    return 0;
   for(auto i:m_ana)
   {
      // cout<<i.first<<" "<<m_ana[i.first]<<" "<<m_w[i.first]<<" ";
       if(m_ana[i.first]!=m_w[i.first])
       return 0;
   }
   return 1;
}
int main()
{
    string s,ana;
    cin>>s>>ana;
    int k=ana.size(),n=s.size(),i=0,j=0,ans=0;
    map<char,int> m_ana;
    map<char,int> m_w;
    for(i=0;i<k;i++)
     m_ana[ana[i]]+=1;
    i=0;
    while(j<n)
    {
        m_w[s[j]]+=1;
        if(j-i+1==k)
        {
            // cout<<comp(m_ana,m_w)<<" ";
           if(comp(m_ana,m_w))
               ans++;
          // cout<<s[i]<<" ";
           m_w[s[i]]--;
           i++;
        }
        j++;
    }
    cout<<ans<<endl;
}