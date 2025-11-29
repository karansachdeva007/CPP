#include <iostream>
#include <vector>
using namespace std;

// undirected weighted

int main()
{
    int vertex, edge;
    cin >> vertex >> edge;

    vector<vector<int>> adjM(vertex, vector<int>(vertex, 0));

    int u, v,weight;

    for (int i = 0; i < edge; i++) {
        cin >> u >> v>>weight;
        adjM[u][v] = weight;
        adjM[v][u] = weight;
    }

    for (int i = 0; i < vertex; i++) {
        for (int j = 0; j < vertex; j++) {
            cout << adjM[i][j] << " ";
        }
        cout << endl;   
    }

    return 0;
}
