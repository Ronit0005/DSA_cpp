#include <iostream>
using namespace std;
#include <list>
#include <vector>

class Graph{
    int V;
    list<pair<int,int>>* l;
    public:
    Graph(int V){
        this->V=V;
        l= new list<pair<int,int>>[V];
    }
    void addEdge(int u,int v,int wt){
        l[u].push_back({v,wt});
        l[v].push_back({u,wt});
    }
    void print_all(){
        for(int i=0;i<V;i++){
            cout<<i<<" : ";
            for(auto ele:l[i]){
                cout<<"{"<<ele.first<<" "<<ele.second<<"}";
            }
            cout<<endl;
        }
    }
};

int main(){
    Graph g(5);
    g.addEdge(0,2,3);
    g.addEdge(2,3,4);
    g.addEdge(3,1,1);
    g.addEdge(3,4,3);
    g.addEdge(1,4,6);
    g.addEdge(0,1,2);

    g.print_all();
    return 0;
}