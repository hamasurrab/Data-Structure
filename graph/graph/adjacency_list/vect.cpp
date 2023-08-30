#include<iostream>
#include<vector>

using namespace std;
void addEdge(vector<int> adj[],int u, int v){

    adj[u].push_back(v);
}

void printMyAdj(vector<int> adj[], int v){
    for(int i=0;i<v;i++)
    {
        cout<<i<<"-->";
    for(auto j: adj[i] )
    {
        cout<<j<<" ";
    }
    cout<<"\n";
    }
}

int main() {
    int v = 7;
    vector<int> a[8];
    addEdge(a,1,2);
    addEdge(a,1,4);
    addEdge(a,1,3);
    addEdge(a,2,1);
    addEdge(a,2,4);
    addEdge(a,2,5);
    addEdge(a,3,1);
    addEdge(a,3,4);
    addEdge(a,3,6);
    addEdge(a,4,1);
    addEdge(a,4,2);
    addEdge(a,4,3);
    addEdge(a,4,5);
    addEdge(a,4,6);
    addEdge(a,4,7);
    addEdge(a,5,2);
    addEdge(a,5,4);
    addEdge(a,5,7);
    addEdge(a,6,3);
    addEdge(a,6,4);
    addEdge(a,6,7);
    addEdge(a,7,4);
    addEdge(a,7,5);
    addEdge(a,7,6);
    printMyAdj(a,v);

}