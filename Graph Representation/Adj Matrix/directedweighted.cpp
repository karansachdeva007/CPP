#include <iostream>
#include <vector>
#include <climits>
using namespace std;


//  directed weighted
int main()
{
    int vertex, edge;
    cin >> vertex >> edge;

    vector<vector<int>> adjM(vertex, vector<int>(vertex, INT_MAX));

    int u, v, weight;

    for (int i = 0; i < edge; i++) {
        cin >> u >> v >> weight;
        adjM[u][v] = weight; 
    }

    for (int i = 0; i < vertex; i++) {
        for (int j = 0; j < vertex; j++) {
            if (adjM[i][j] == INT_MAX) cout << "0 ";
            else cout << adjM[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
