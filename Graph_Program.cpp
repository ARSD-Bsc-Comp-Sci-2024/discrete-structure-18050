#include<iostream>
using namespace std;
int main()
{
    int v,e;
    cout<<"Enter no. of vertices:";
    cin>>v;
    
    cout<<"\nEnter no. of edges:";
    cin>>e;
    
    int adj[v][e];
    for(int i=0;i<e;i++)
    {
        for(int j=0;j<e;j++)
        {
            adj[i][j] =0;
        }
    }
    cout<<"\nEnter adjacent vertices:";
    for(int i=0;i<e;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a-1][b-1] =1;
    }
    
    cout<<"\nMatrix :"<<endl;
    for(int i=0;i<e-1;i++)
    {
        for(int j=0;j<e-1;j++)
        {
           cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}