#include <iostream>
#include <queue>
#include <vector>
#include <unordered_set>

using namespace std;
class Graph {
    int V; 
    vector<vector<int>> adj;

public:
    Graph(int V) : V(V), adj(V) {}
    void addEdge(int v, int w) {
        adj[v].push_back(w);
    }
    void BFS(int start) {
        vector<bool> visited(V, false);
        queue<int> queue;
        visited[start] = true;
        queue.push(start);

        while (!queue.empty()) {
            start = queue.front();
            cout << start << " ";
            queue.pop();

            for (int i : adj[start]) {
                if (!visited[i]) {
                    visited[i] = true;
                    queue.push(i);
                } } } } };

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "BFS traversal starting from vertex 2: ";
    g.BFS(2);
    cout << endl;

    return 0;
}
