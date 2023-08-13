#include <iostream>
#include <vector>
using namespace std;

const int MAX_VERTICES = 100;

vector<int> graph[MAX_VERTICES];
bool visited[MAX_VERTICES];

void addEdge(int from, int to) {
    graph[from].push_back(to);
}

void dfs(int vertex) {
    visited[vertex] = true;
    cout << vertex << " ";

    for (int neighbor : graph[vertex]) {
        if (!visited[neighbor]) {
            dfs(neighbor);
        }
    }
}

void dfsTraversal(int vertices) {
    for (int i = 0; i < vertices; i++) {
        if (!visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    int vertices, edges;
    cout << "Enter the number of vertices and edges: ";
    cin >> vertices >> edges;

    cout << "Enter the edges (from to):\n";
    for (int i = 0; i < edges; i++) {
        int from, to;
        cin >> from >> to;
        addEdge(from, to);
    }

    cout << "DFS traversal:\n";
    dfsTraversal(vertices);

    return 0;
}
