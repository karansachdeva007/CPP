#include <iostream>
#include <vector>
using namespace std;

class Graph {
private:
    int V;   // number of vertices
    bool directed;
    vector<vector<pair<int,int>>> adj;  // node -> (neighbor, weight)

public:

    Graph(int vertices, bool isDirected = false) {
        V = vertices;
        directed = isDirected;
        adj.resize(V);
    }

    // Add edge
    void addEdge(int u, int v, int w) {
        adj[u].push_back({v, w});
        if (!directed) {
            adj[v].push_back({u, w});
        }
    }

    // Remove edge (u -> v only)
    void removeEdge(int u, int v) {
        // remove u -> v
        for (auto it = adj[u].begin(); it != adj[u].end(); it++) {
            if (it->first == v) {
                adj[u].erase(it);
                break;
            }
        }

        // if undirected, also remove v -> u
        if (!directed) {
            for (auto it = adj[v].begin(); it != adj[v].end(); it++) {
                if (it->first == u) {
                    adj[v].erase(it);
                    break;
                }
            }
        }
    }

    // Print adjacency list
    void printGraph() {
        for (int i = 0; i < V; i++) {
            cout << i << " -> ";
            for (auto &p : adj[i]) {
                cout << "(" << p.first << ", " << p.second << ") ";
            }
            cout << endl;
        }
    }
};
