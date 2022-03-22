#include<bits/stdc++.h>
#define inf 100000
using namespace std;
int graph[10001][10001];
int main()
{
    int vz,x;
    cin>>vz;
    vector<int> v(vz);
    for(int k=0;k<vz;k++)
        cin>>v[k];

     int w,a,b,e,ver;
	 	 int i,j,k,q1,q2;
	 for(i=1;i<=1001;i++)
	 {
	 	for(j=1;j<=1001;j++)
	 	{
	 	graph[i][j]=inf;
		}
	 }
     ver=1001;
	 cin>>e;
	 for(i=1;i<=e;i++)
	 {
	 	cin>>a>>b>>w;
	 	graph[a][b]=w;
	 }
	 for(i=1;i<=ver;i++)
	 {
	 	graph[i][i]=0;
	 }
	 for(k=1;k<=ver;k++)
	 {
	 	for(i=1;i<=ver;i++)
	 	{
	 		for(j=1;j<=ver;j++)
	 		{
	 		   if(graph[i][k]==inf||graph[k][j]==inf)
	 		   continue;
	 		   graph[i][j]=min(graph[i][j],graph[i][k]+graph[k][j]);
			}
		 }
	 }
	 cin>>q1>>q2;
	cout<<graph[q1][q2]<<" ";

}
