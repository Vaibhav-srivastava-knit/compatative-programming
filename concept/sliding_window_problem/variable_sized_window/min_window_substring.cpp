#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int i,j,rc,cc=0,mx=1000001,f,l;
    cin>>s1>>s2;
    map<char,int> m2;
    map<char,int> m1;
    for(i=0;i<s2.size();i++)
    m2[s2[i]]+=1;
    rc=s2.size();
    i=0;j=0;
    while(j<s1.size())
    {
        m1[s1[j]]+=1;
       if(m1[s1[j]]<=m2[s1[j]])
           cc++;
       if(cc==rc)
       {
           while(cc==rc && i<=j)
           {
                // mx=min(mx,j-i+1);
                if(j-i+1<mx)
                {
                    mx=min(mx,j-i+1);
                    f=i;
                    l=j;
                }
                m1[s1[i]]--;
                if(m1[s1[i]]<m2[s1[i]])
                      cc--; 
                i++;         
           }
       }   
       j++; 
    }
    for(i=f;i<=l;i++)
    {
   cout<<s1[i];
    }
   // cout<<mx<<endl;
}