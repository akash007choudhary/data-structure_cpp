#include<iostream>
#include<list>
using namespace std ; 

class graph{
    int V;
    list<int> *l ;
    
    public:
    graph(int V ){
        this->V= V; 
        l= new list<int>[V];
    }
     void add_edge(int u ,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print_graph(){
        for (i = 0 ; i < V;i++){
            cout<<i<<"-";
            for(int neighhbours : l[i]){
                cout<<neighbours<<" ";
            }
            cout<<endl;
        }
    }
}

int main (){
    graph g(4);
    g.add_edge
}