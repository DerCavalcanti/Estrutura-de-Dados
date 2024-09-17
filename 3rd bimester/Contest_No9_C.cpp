#include <bits/stdc++.h>
#define MAX 100
using namespace std;
vector<tuple<int,int>>graph[MAX+1];
int n, m;

void AddEdge(int u, int v, int w){
	graph[u].push_back({v,w});
	graph[v].push_back({u, w});
}

void Djikstra(int start){
	priority_queue <tuple<int,int>>pq;
	vector<int>dist(dist+1, max_int);
	
}

int main(){
	cin >> n >> m;
	int u, v, w;
	for(int i = 0; i < m; i++){
		cin >> u >> v >> w;
		AddEdge(u, v, w);
	}
	
	Djikstra(1);
	
	return 0;
}