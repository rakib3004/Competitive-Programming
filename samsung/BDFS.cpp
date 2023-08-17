#include<bits/stdc++.h>
using namespace std;

const int MaxVertices = 100;

vector<int> graph [MaxVertices];
bool isVisited[MaxVertices];

void addEdge(int u, int v)
{
    graph[u].push_back(v);

}

void breathFirstSearch(int startingPoint)
{
    queue<int> bfsQueue;

    bfsQueue.push(startingPoint);
    isVisited[startingPoint] = true;

    cout<<startingPoint<<" ";
    while(!bfsQueue.empty())
    {

        int currentPoint = bfsQueue.front();
        bfsQueue.pop();


        for(int neigbourPoint: graph[currentPoint])
        {
            if(isVisited[neigbourPoint]==false)
            {
                bfsQueue.push(neigbourPoint);
                isVisited[neigbourPoint]=true;
            }
            cout<<neigbourPoint<<" ";

        }

    }

}

void depthFirstSearch(int currentPoint)
{
    cout<<currentPoint<<" ";
    isVisited[currentPoint] =  true;

    for(int neigbourPoint: graph[currentPoint])
    {
        if(!isVisited[neigbourPoint])
        {
            isVisited[neigbourPoint]=true;


            depthFirstSearch(neigbourPoint);
        }

    }

}

int main()
{

    int nodes;
    int edges;

    cout<<"Enter nodes and edges"<<endl;
    cin>>nodes>>edges;


    for(int i=0; i<edges; i++)
    {
        int u,v;

        cin>>u>>v;
        addEdge(u,v);

    }

   cout << "Graph:" << endl;
    for (int i = 0; i < nodes; i++) {
        cout << "Node " << i << " -> ";
        for (int neighbor : graph[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }
    int startingPoint = 0;
    //breathFirstSearch(startingPoint);
    depthFirstSearch(startingPoint);

}

/*

4 6
0 1
1 2
1 3
3 4
3 5
3 6
*/

/*
9 8
0 7
0 5
5 8
8 6
8 2
2 3
5 4
5 1
*/
