#include <iostream>
#include <vector>
using namespace std;

// undirected weighted graph
int main()
{
    int vertex, edge;
    cin >> vertex >> edge;

    vector<vector<pair<int,int>>> adjList(vertex);

    int u, v, weight;

    for (int i = 0; i < edge; i++) {
        cin >> u >> v >> weight;
        adjList[u].push_back({v, weight});
        adjList[v].push_back({u, weight});
    }

    // Print adjacency list
    for (int i = 0; i < vertex; i++) {
        cout << i << " -> ";
        for (auto &p : adjList[i]) {
            cout << "(" << p.first << ", " << p.second << ") ";
        }
        cout << endl;
    }

    return 0;
}
