#include <iostream>
#include <list>
#include <vector>
#include<queue>
using namespace std;

class graph
{
    int V;
    list<int> *l;

public:
    graph(int V)
    {
        this->V = V;   // the value given to this is right side part and the above v is asigned that value  you can even use {grpah(int var){
        //  v=var; ---->>> like a normal fxn thing }}
        l = new list<int>[V];     // v size ka list ko heap memeort assigend 
    }
    void addedge(int u, int v)
    {
        // as undorected to both ways krna padega pushback nhi to doirected hita to only pushback v ko krte 
        l[u].push_back(v);     
        l[v].push_back(u);
    }
    // void printlist()
    // {
    //     for (int i = 0; i < V; i++)
    //     {
    //         // cout<<l[i]<<" :";        if we do this we cant acsess this as l[i] is a list so cnat pritn by usinng a cout statementt
    //         cout << i << " :";
    //         for (int neighbour : l[i])   // ye kya kr rha index and us index main rhne wala pura list print kr de rha 
    //         {
    //             cout << neighbour << " ";
    //         }
    //         cout << endl;
    //     }
    // }




    // bfs traversal fxn 

    // time cmplexiyt = O (EDGE + VERTICES) 
    void bfs(){
        queue<int> q;
        vector<bool> visit(V,false);
        q.push(0);  //0 is teh source node as value is 0 

        visit[0]= true;
        while(q.size()>0){
            int u = q.front();  // its teh source u wala chz 
            q.pop();

            cout<<u<<" ";

            for(int v : l[u]){
                if(!visit[v]){
                    visit[v]= true;   // YE YHI LIKHNA HAI CODE MAIN SOMETIMES WE FORGET 
                    q.push(v);
                }
            }
        }
        cout<<endl;

       
    }
     void dfshelper(int u , vector<bool>&vis) {
            cout<<u<<" ";
            vis[u]= true;

            for(int v : l[u]){
                if(!vis[v]){
                    dfshelper(v, vis);
                }
            }
        }

        void dfs (){
            int src= 0 ;     //source node is taken zero 
            vector<bool> vis(V, false);
            dfshelper(src, vis);
            cout<<endl;
        }

        bool iscycle_undirectd_dfs(int src , int par, vector<bool> &vis){
            vis[src]= true;
            list<int> neighbours= l[src];

            for(int v : l[src]){
                if(!vis[v]){
                    if(iscycle_undirectd_dfs(v , src, vis)){
                            return true ;
                    }
                    else if(v!= par){
                        return true ;
                    }

                }
                
            }
            return false;
        }
        bool iscycle(){
            vector<bool> vis(V, false);
            for(int i = 0 ; i<V; i++){
                if(!vis[i]){
                    if(iscycle_undirectd_dfs(1, - 1, vis)) return true ;
                }
            }
            return false;
        }

        bool is_cycle_bfs(int src , vector<bool> &vis){
            queue<pair<int, int>> q; 
            q.push({src, -1});
            vis[src]= true;

               while(q.size()>0){
            int u = q.front().first ;
              // its teh source u wala chz 
            int par= q.front().second; 
              q.pop();
  list<int> neighbours= l[src];
         
            for(int v : neighbours){
                if(!vis[v]){
                vis[v]= true;   // YE YHI LIKHNA HAI CODE MAIN SOMETIMES WE FORGET 
                    q.push({v, u});

                }
                else if (v!=par){
                    return true ;
                }
            }
        }
        return false;
            
        }
        bool is_cycle(){
            vector<bool>vis(V, false);
            // for unconnected graphs this for loop is there
            for(int i= 0 ; i<V; i++){
                if(!vis[i]){
                    if(is_cycle_bfs(i,vis)){
                        return true ;
                    }
                }
            }
            return false;
        }
};

int main()
{
    graph g(5);
    g.addedge(0, 1);            // ye matlb hai ki 0 is connected to 1 and 1 is also connected to 0 as undirected hai 
    g.addedge(1, 2);
    g.addedge(1, 3);
    g.addedge(2, 3);
    g.addedge(2, 4);
    // g.printlist();
    g.bfs();

    return 0;
}