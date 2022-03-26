//disclamer this can only work on poistive number
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j,x,s=0,mx=-1;
    cin>>n>>k;
    vector<int> v;
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    i=0;
    j=0;
  //  cout<<v[0]<<endl;
    while(j<n)
    {
        s+=v[j];
        if(s==k)
           mx=max(j-i+1,mx);
         while(s>k)
            {
                s-=v[i];
                i++;
            }
             cout<<v[i]<<" "<<v[j]<<" "<<s<<endl;
        j++;
       
    }
    cout<<mx<<endl;
}