// 2. B.F.S on disconnected graphs.
#include<bits/stdc++.h> 
using namespace std; 

void BFS(vector<int> adj[], int s, bool visited[]) 
{ 	queue<int>  q;
	
	visited[s] = true; 
	q.push(s); 

	while(q.empty()==false) 
	{ 
		int u = q.front(); 
		q.pop();
		cout << u << " "; 
		 
		for(int v:adj[u]){
		    if(visited[v]==false){
		        visited[v]=true;
		        q.push(v);
		    }
		} 
	} 
}

void BFSDin(vector<int> adj[], int V){
    bool visited[V]; 
	for(int i = 0;i<V; i++) 
		visited[i] = false;
		
    for(int i=0;i<V;i++){
        if(visited[i]==false)
            BFS(adj,i,visited);
    }
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() 
{ 
	int V=7;
	vector<int> adj[V];
	addEdge(adj,0,1); 
	addEdge(adj,0,2); 
	addEdge(adj,2,3); 
	addEdge(adj,1,3); 
	addEdge(adj,4,5);
	addEdge(adj,5,6);
	addEdge(adj,4,6);

	cout << "Following is Breadth First Traversal: "<< endl; 
	BFSDin(adj,V); 

	return 0; 
} 
