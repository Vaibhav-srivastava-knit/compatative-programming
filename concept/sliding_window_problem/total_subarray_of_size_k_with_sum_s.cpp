#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v; 
    int n,i,x,j,k,su=0,t=-100;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    i=0;j=0;
    while(j<n)
    {
        su=su+v[j];
       if(j-i+1<k)
        j++;
       else if(j-i+1==k)
       {
        t=max(t,su);
        su=su-v[i];
        i++;
        j++;
       }       
    }
    cout<<t<<endl;
}