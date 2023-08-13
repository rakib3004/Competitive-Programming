#include <iostream>
#include <vector>
using namespace std;

const int MAX_NODES = 100005; // Assuming maximum number of nodes

vector<int> tree[MAX_NODES];
int color[MAX_NODES];
bool visited[MAX_NODES];

void colorTree(int node, int parentColor) {
    visited[node] = true;
    int currentColor = 1; // Start with the first color

    for (int neighbor : tree[node]) {
        if (!visited[neighbor]) {
            // Ensure the neighbor's color is different from the parent's color
            while (currentColor == parentColor) {
                currentColor = (currentColor + 1) % 3 + 1; // Cycle through 1, 2, 3
            }

            color[neighbor] = currentColor;
            colorTree(neighbor, currentColor);
            currentColor = (currentColor + 1) % 3 + 1; // Move to the next color
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of nodes: ";
    cin >> n;

    cout << "Enter the edges (node parent):" << endl;
    for (int i = 1; i < n; i++) {
        int parent;
        cin >> parent;
        tree[parent].push_back(i);
        tree[i].push_back(parent);
    }

    color[0] = 1; // Root node is assigned color 1
    colorTree(0, 0);

    cout << "Colors assigned to nodes:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Node " << i << ": Color " << color[i] << endl;
    }

    return 0;
}
