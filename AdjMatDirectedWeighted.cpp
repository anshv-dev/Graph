// Online C++ compiler to run C++ program online
//directed weighted graph
#include <bits/stdc++.h>
using namespace std;
int main() {
    int vertex,edges;
    cin>>vertex>>edges;
    
    vector<vector<int>>AdjMat(vertex,vector<int>(vertex,0));
    
    int u,v,weight;
    
    for(int i=0;i<edges;i++){
        
        cin>>u>>v>>weight;
        AdjMat[u][v]=weight;
    
    }
    
    for(int i=0;i<vertex;i++){
        for(int j=0;j<vertex;j++){
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}