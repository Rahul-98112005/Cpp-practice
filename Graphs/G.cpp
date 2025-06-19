#include<iostream>
#include<vector>
using namespace std;

int main() { 

    // undirected and directed graph respresentation using matrix

    // int vertex, edges;
    // cin >> vertex >> edges;
    // // for un weight we need to change int type to bool type in vector
    // vector<vector<int> >AdjMatrix(vertex, vector<int>(vertex,0));

    // int u , v , weight ; 
    // for(int i = 0 ; i < edges ; i ++)
    // {
    //     // remove weight in unweight graph
    //     cin >> u >> v >> weight;
    //     AdjMatrix[u][v] =  weight;
    //     AdjMatrix[v][u] =  weight;
    // }

    // for (int i = 0; i < vertex; i++)
    // {
    //     for (int j = 0; j < vertex; j++)
    //      cout << AdjMatrix[i][j] << " ";
    //     cout <<  endl;
    //     /* code */
    // }
    // return 0;

    // graph representation using Adjacency list

    int vertex,edges;
    cin>> vertex >> edges;

    vector<pair<int,int>>AdjacencyList[5];

    int u,v,weight;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v >> weight;
        AdjacencyList[u].push_back(make_pair(v,weight));
        // AdjacencyList[v].push_back(make_pair(u,weight)); // for directed graph
    }

    for (int i = 0; i < vertex; i++)
    {
        cout << i << " -> ";
        for (int j = 0; j < AdjacencyList[i].size(); j++)
        {
            cout << AdjacencyList[i][j].first << " " << AdjacencyList[i][j].second << " ";
        }
        cout <<  endl;
    }
    
    


}