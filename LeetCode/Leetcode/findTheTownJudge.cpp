//problem: https://leetcode.com/problems/find-the-town-judge/submissions/

class Graph {
    int V;
    list<int> *adj;
    int *trustees;
public:
    Graph(int V); 
  
    void addEdge(int v, int w);
    int checkEmptyAdj(int v);
    int isTrustedByAll(int v, int N);
  };
  
Graph::Graph(int V) {
    this->V = V;
    adj = new list<int>[V];
    trustees = new int[V];
}
  
void Graph::addEdge(int v, int w) {
    adj[v].push_back(w); // Add w to v’s list.
    if(trustees[w] < 1) trustees[w] = 1;
    else trustees[w]++;
}

int Graph::checkEmptyAdj(int v) {
    if(adj[v].empty()) return 1;
    
    return 0;
}

int Graph::isTrustedByAll(int v, int N) {
    if(trustees[v] == N - 1) return v+1;
    else return -1;
}


class Solution {
public:
    
    int findJudge(int N, vector<vector<int>>& trust) {
        
        if(N == 1) return 1;
        
        Graph g(N);
        
        for(int i = 0; i <trust.size(); i++) {
            g.addEdge(trust[i][0]-1, trust[i][1]-1 );
        }
        
        
    for(int i = 0; i < N; i++) {
        if(g.checkEmptyAdj(i)) {
            return g.isTrustedByAll(i, N);
        }
    }
        return -1;
    }
        
    
};
