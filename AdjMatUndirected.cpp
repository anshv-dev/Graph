// Online C++ compiler to run C++ program online
//undirected graph
#include <bits/stdc++.h>
using namespace std;
int main() {
    int vertex,edges;
    cin>>vertex>>edges;
    vector<vector<bool>>AdjMat(vertex,vector<bool>(vertex,0));
    int u,v;
    for(int i=0;i<edges;i++){
        cin>>u>>v;
        AdjMat[u][v]=1;
        AdjMat[v][u]=1;
    }
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}