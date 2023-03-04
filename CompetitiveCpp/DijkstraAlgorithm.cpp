/*

You are given an undirected, weighted graph represented as an adjacency list. Each edge in the graph has a weight associated with it. Write a C++ program that finds the shortest path between two nodes in the graph using Dijkstra's algorithm. Your program should take the following inputs:

1. The number of vertices in the graph
2. The number of edges in the graph
3. A list of edges, represented as triples (u, v, w), where u and v are integers representing the endpoints of the edge, and w is the weight of the edge
4. The source node
5. The destination node

Your program should output the length of the shortest path between the source and destination nodes, as well as the sequence of nodes visited along the shortest path.

Example Input:

```cpp
6 9
0 1 4
0 2 3
1 2 2
1 3 5
2 3 7
2 4 4
3 4 6
3 5 8
4 5 1
0 5
```

Example Output:

```cpp
Shortest path length: 9
Sequence of nodes visited: 0 -> 2 -> 4 -> 5
```


*/

#include <iostream>
#include <queue>
#include <climits>

#include <vector>

using namespace std;

typedef pair<int, int> _pair;

const int i = INT_MAX;

// Finds shortest path between two nodes.
void DijkstraShortestDestination(vector<vector<_pair>>& adjNode, int destination, int src, vector<int>& _dis, vector<int>& parent) {
    int n = adjNode.size();

    _dis.assign(n, i);
    parent.assign(n, -1);

    priority_queue<_pair, vector<_pair>, greater<_pair>> pq;
    pq.push(make_pair(0, src));
    _dis[src] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        if (u == destination) {
            return;
        }

        for (auto edge : adjNode[u]) {
            int v = edge.first;
            int weight = edge.second;

            if (_dis[v] > _dis[u] + weight) {
                _dis[v] = _dis[u] + weight;
                parent[v] = u;
                pq.push(make_pair(_dis[v], v));
            }
        }
    }
}

//
void PrintGraph(int node, vector<int>& parent) {
    if (node == -1) {
        return;
    }
    PrintGraph(parent[node], parent);
    cout << node << " -> ";
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<_pair>> adjList(n);

    //Taking Inputs
    int u, v, w;
    for (int i = 0; i < m; i++) {
        cin >> u >> v >> w;
        adjList[u].push_back(make_pair(v, w));
        adjList[v].push_back(make_pair(u, w)); 
    }

    int source, destination;
    cin >> source >> destination;

    vector<int> distance;
    vector<int> parent;

    //Feeding Inputs into dijKstra Destination
    DijkstraShortestDestination(adjList, destination, source, distance, parent);
    cout << "Shortest path length: " << distance[destination] << endl;
    cout << "Sequence of nodes visited: ";
    PrintGraph(destination, parent);
    return 0;
}