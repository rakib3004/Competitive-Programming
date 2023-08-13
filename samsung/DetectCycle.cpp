#include <iostream>
#include <vector>
#include <stack>
using namespace std;

const int MAX_VERTICES = 100;

vector<int> graph[MAX_VERTICES];
bool visited[MAX_VERTICES];
bool stackRecursion[MAX_VERTICES];

bool isCyclicUtil(int vertex) {
    if (!visited[vertex]) {
        visited[vertex] = true;
        stackRecursion[vertex] = true;

        for (int neighbor : graph[vertex]) {
            if (!visited[neighbor] && isCyclicUtil(neighbor)) {
                return true;
            }
            else if (stackRecursion[neighbor]) {
                return true;
            }
        }
    }

    stackRecursion[vertex] = false;
    return false;
}

bool isCyclic(int vertices) {
    for (int i = 0; i < vertices; i++) {
        if (isCyclicUtil(i)) {
            return true;
        }
    }
    return false;
}

void addEdge(int from, int to) {
    graph[from].push_back(to);
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

    if (isCyclic(vertices)) {
        cout << "The graph contains a cycle." << endl;
    } else {
        cout << "The graph does not contain a cycle." << endl;
    }

    return 0;
}
