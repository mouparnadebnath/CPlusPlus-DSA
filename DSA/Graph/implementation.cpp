// A simple representation of graph using STL
#include <bits/stdc++.h>
using namespace std;

// Function to add an edge to an undirected graph
void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
// function to print the graph

void printGraph(vector<int> adj[], int V){
    for(int i=0;i<V;i++){
        cout<<"Node "<<i<<": ";
        for(int j:adj[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int V = 5;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    printGraph(adj,V);
    return 0;
}