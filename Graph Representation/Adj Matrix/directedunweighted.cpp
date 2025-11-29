#include <iostream>
#include <vector>
using namespace std;

// directed unweighted

int main()
{
    int vertex, edge;
    cin >> vertex >> edge;

    vector<vector<bool>> adjM(vertex, vector<bool>(vertex, 0));

    int u, v;

    for (int i = 0; i < edge; i++) {
        cin >> u >> v;
        adjM[u][v] = 1;
       
    }

    for (int i = 0; i < vertex; i++) {
        for (int j = 0; j < vertex; j++) {
            cout << adjM[i][j] << " ";
        }
        cout << endl;   
    }

    return 0;
}
