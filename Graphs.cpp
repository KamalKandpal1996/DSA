//Graph : Theory discuss 
//Graph Representation : Adjacency Matrix , Arrays Of different Lengths , Adjacency List 
//Graph Traversal : Breadth first search , Depth first search 
//Spanning Trees, Minimum Spanning trees
//Minimum spanning Tree algorithms : Prim's algorithm, Krushkal's Algorithm(+Disjoint set operations)
//Shortest Path Algorithms: Dijkstra Algorithms, Bellman ford, Floyd warshall

#include<iostream>
using namespace std;

// *************************** Dijkstra Algorithm ***************************

// int findMinVertex(int* distance , bool* visited, int n){
//     int minVertex= -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (!visited[i] && (minVertex==1 || distance[i]<distance[minVertex]))
//         {
//             minVertex= i;
//         }
        
//     }
//     return minVertex;
// }



// void dijkstra(int **edges, int n){

//     int* distance = new int[n];
//     bool* visited = new bool[n];

//     for (int i = 0; i < n; i++)
//     {
//         distance[i]= INT_MAX;
//     }
//     distance[0]= 0;

//     for (int i = 0; i < n-1; i++)
//     {
//         int minVertex = findMinVertex(distance, visited, n);
//         for (int j = 0; j < n; j++)
//         {
//             if (edges[minVertex][j]!=0 && !visited[j])
//             {
//                 visited[minVertex] = true;
//                 int dist = distance[minVertex] + edges[minVertex][j];
//                 if (dist<distance[j])
//                 {
//                     distance[j]= dist;
//                 }
                
//             }
            
//         }
        
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout<< i << " "<< distance[i] <<endl;
//     }
    
//     delete[] distance;
//     delete[] visited;
// }




// int main()
// {   
//     int n , e; 
//     cout<< "Enter number of vertices : " ;  
//     cin>> n ;
//     cout<< "Enter number of Edges : " ;
//     cin>> e;


//     int** edges = new int*[n];
//     for (int i = 0; i < n; i++)
//     {
//         edges[i]= new int[n];
//         for (int j = 0; j < n; j++)
//         {
//             edges[i][j]= 0;
//         }
        
//     }
    
//     cout << "Source " <<"Destination " <<"Weight"<<endl;
//     for (int i = 0; i < e; i++)
//     {
//         int f,s,weight;
        
//         cin>> f >> s >> weight;
//         edges[f][s]= weight;
//         edges[s][f]= weight;
//     }
    
//     cout<<endl;
//     dijkstra(edges,n);

//     for (int i = 0; i < n; i++)
//     {
//         delete[] edges[i];
//     }
    
//     delete[] edges;


//     return 0;
// }


// ***************************  Bellman Ford Algorithm *****************************

// struct Edge{
//     int src, dest, weight;
// };


// struct Graph{
//     int V, E;
//     struct Edge* edge;
// };


// struct Graph * createGraph(int V, int E){
//     struct Graph * graph = new Graph;
//     graph->V = V;
//     graph->E = E;
//     graph->edge = new Edge[E];
//     return graph;
// }


// void printArr(int dist[], int V){
//     cout << "Vertex" << "  " << "Distance From Source"<<endl;

//     for (int i = 0; i < V; i++)
//     {
//         cout<< i << "          " << dist[i]<<endl;

//     }
    
// }

// void BellmanFord (struct Graph* graph, int src){
//     int V = graph->V;
//     int E = graph->E;
//     int dist[V];

//     for (int i = 0; i < V; i++)
//         dist[i]= INT_MAX;
    
//     dist[src]= 0;

//     for (int i = 0; i < V-1; i++)
//     {
//         for (int j = 0; j < E; j++)
//         {
//             int u = graph->edge[j].src;
//             int v = graph->edge[j].dest;
//             int weight = graph->edge[j].weight;

//             if (dist[u]!= INT_MAX && dist[u]+weight <dist[v])
//             {
//                 dist[v]= dist[u] + weight;
//             }
            
//         }
        
//     }
    
//     for (int i = 0; i < E; i++)
//     {
//         int u = graph->edge[i].src;
//             int v = graph->edge[i].dest;
//             int weight = graph->edge[i].weight;

//             if (dist[u]!= INT_MAX && dist[u]+weight <dist[v])
//             {
//                 cout<< " Graph contains a negative weight cycle "<< endl;
//                 return;
//             }
//     }
    
// printArr(dist,V);

// return;
// }


// int main()
// {
//     int V= 3;
//     int E= 3;

//     struct Graph * graph = createGraph(V,E);

//     graph->edge[0].src = 0;
//     graph->edge[0].dest = 1;
//     graph->edge[0].weight = 6;

//     graph->edge[1].src = 0;
//     graph->edge[1].dest = 2;
//     graph->edge[1].weight = 3;

//     graph->edge[2].src = 2;
//     graph->edge[2].dest = 1;
//     graph->edge[2].weight = -1;

//     BellmanFord(graph, 0);


//     return 0;
// }



// *************************** Floyd Warshall Algorithm *****************************

// #define nV 4

// #define INF 999

// void printMatrix(int matrix[][nV]){

//     for (int i = 0; i < nV; i++)
//     {
//         for (int j = 0; j < nV; j++)
//         {
//             cout<< matrix[i][j] << " ";
//         }
//         cout<<"\n";
//     }
// }

// void floydWarshall(int graph[][nV]){
//     int matrix[nV][nV], i, j, k;    // (matrix) will be the output matrix.

//     for ( i = 0; i < nV; i++)
//     {
//         for ( j = 0; j < nV; j++)
//         {
//             matrix[i][j]= graph[i][j];         // Creating A^0
//         }
        
//     }

//     for (k = 0; k < nV; k++)
//     {
//         for ( i = 0; i < nV; i++)
//         {
//             for ( j = 0; j < nV; j++)
//             {
//                 if (matrix[i][k] + matrix[k][j] < matrix[i][j])
//                     matrix[i][j]= matrix[i][k] + matrix[k][j];         
//             }
//         }
//     }
//     printMatrix(matrix);
// }


// int main()
// {
//     int graph[nV][nV]  = {
//         {0,3,INF,5},
//         {2,0,INF,4},
//         {INF,1,0,INF},
//         {INF,INF,2,0}
//     };
    
//     floydWarshall(graph);

//     return 0;
// }
