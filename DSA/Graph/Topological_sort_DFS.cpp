#include<bits/stdc++.h>
#include <vector>
#include <stack>
using namespace std;

void dfs(int u, stack<int>& st, vector<int>adj[], vector<bool>& visited){
visited[u]=true;
for(auto v:adj[u]){
    if(visited[v]==false){
        dfs(v, st, adj, visited);
    }
}
st.push(u);
}
void topologicalSort(vector<int>adj[],int V){
    vector<bool> visited(V, false);
    stack<int> st;
    for(int u=0;u<V;u++){
        if(visited[u]==false){
            dfs(u,st,adj,visited);
        }
    }
    while(!st.empty()){
        int s=st.top();
        st.pop();
        cout << s << " ";
    }
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
}
int main(){
    int V=5;
	vector<int> adj[V];
	addEdge(adj,0, 2); 
    addEdge(adj,0, 3); 
    addEdge(adj,1, 3); 
    addEdge(adj,1, 4); 
    addEdge(adj,2, 3);  
  
    cout << "Following is a Topological Sort of\n"; 
    topologicalSort(adj,V);
}