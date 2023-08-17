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

    while(!bfsQueue.empty())
    {

        int currentPoint = bfsQueue.front();
        bfsQueue.pop();


        for(int neigbourPoint: graph[currentPoint])
        {
            if(isVisited[neigbourPoint]==false){
                bfsQueue.push(neigbourPoint);
                isVisited[neigbourPoint]=true;
            }
  cout<<neigbourPoint<<"at "<<currentPoint<<"\n";

        }

    }

}

void depthFirstSearch(int startingPoint){
isVisited[startingPoint] =  true;

for(int neigbourPoint: graph[startingPoint]){
    if(!isVisited[neigbourPoint]){
        depthFirstSearch(neigbourPoint);
        isVisited[neigbourPoint]=true;
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

    int startingPoint = 0;
    breathFirstSearch(startingPoint);


}
