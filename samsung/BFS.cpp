#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAX_VERTICES = 100;

vector<int> graph[MAX_VERTICES];
bool visited[MAX_VERTICES];

void addEdge(int from, int to)
{
    graph[from].push_back(to);
}

void bfs(int startVertex)
{
    queue<int> q;
    q.push(startVertex);
    visited[startVertex] = true;

    while (!q.empty())
    {
        int vertex = q.front();
        q.pop();

        cout << vertex << " ";

        for (int neighbor : graph[vertex])
        {
            if (!visited[neighbor])
            {
                q.push(neighbor);
                visited[neighbor] = true;
            }
        }
    }
}

int main()
{
    int vertices, edges;
    cout << "Enter the number of vertices and edges: ";
    cin >> vertices >> edges;

    cout << "Enter the edges (from to):\n";
    for (int i = 0; i < edges; i++)
    {
        int from, to;
        cin >> from >> to;
        addEdge(from, to);
    }

    int startVertex;
    cout << "Enter the start vertex for BFS: ";
    cin >> startVertex;

    cout << "BFS traversal starting from vertex " << startVertex << ":\n";
    bfs(startVertex);

    return 0;
}
