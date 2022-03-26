#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,i,j,mx=-1;
    string s;
    map<char,int> m;
    cin>>s;
    cin>>k;
    i=0;j=0;
    while(j<s.size())
    {
        m[s[j]]+=1;
        if(m.size()==k)
          mx=max(mx,j-i+1);
        while(m.size()>k)
        {
            m[s[i]]--;
            if(m[s[i]]==0)
            m.erase(s[i]);
            i++;
        }
        j++;
    }
    cout<<mx<<endl;
}