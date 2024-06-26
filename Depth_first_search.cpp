#include <iostream>
#include <vector>
#include <stack>
#include <unordered_set>
using namespace std;

class Graph {
    int V;
    vector<int> *adj;
public:
    Graph(int V); 
    void addEdge(int v, int w); 
    void DFS(int v); 
};

Graph::Graph(int V) {
    this->V = V;
    adj = new vector<int>[V];
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w); 
}

void Graph::DFS(int v) {
    vector<bool> visited(V, false);
    stack<int> stack;
    stack.push(v);
    while (!stack.empty()) {
        v = stack.top();
        stack.pop();
        if (!visited[v]) {
            cout << v << " ";
            visited[v] = true;
        }
        for (auto i = adj[v].begin(); i != adj[v].end(); ++i) {
            if (!visited[*i])
                stack.push(*i);
        }
    }
}

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    cout << "Depth First Traversal (starting from vertex 2): ";
    g.DFS(2);
    return 0;
}
