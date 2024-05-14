#include <iostream>
#include <queue>
#define MAX_VERTEX 1001
using namespace std;

class SearchMatGraph{
private:
    int size;
    int edgeArray[MAX_VERTEX][MAX_VERTEX];
    bool visited[MAX_VERTEX];

public:
    SearchMatGraph(int _size)
    :size{_size} {
        reset();
    }

    ~SearchMatGraph(){}

    int getSize(){
        return size;
    }

    void reset() {
        for(int i{1}; i <= size; i++) {
            for(int j{1}; j <= size; j++) {
                edgeArray[i][j] = 0;
            }
        }
    }

    void insertEdge(int v, int u){
        edgeArray[v][u] = 1;
        edgeArray[u][v] = 1;
    }

    void dfsStart(int v) {
        for(int i{1}; i <= size; i++) {
            visited[i] = false;
        }
        visited[v] = true;
        cout << v << ' ';
        
        dfs(v);
        cout << endl;
    }

    void dfs(int v){
        for(int n{1}; n <= size; n++){
            if(edgeArray[v][n] && visited[n] == false) {
                visited[n] = true;
                cout << n << ' ';
                dfs(n);
            }
        }

    }

    void bfsStart(int v){
        for(int i{1}; i <= size; i++) {
            visited[i] = false;
        }
        queue<int> queue;

        queue.push(v);
        visited[v] = true;
        
        cout << v << ' ';

        while(!queue.empty()){
            int temp{queue.front()};
            queue.pop();

            for(int n{1}; n <= size; n++){
                if(edgeArray[temp][n] && visited[n] == false){
                    visited[n] = true;
                    cout << n << ' ';
                    queue.push(n);
                }
            }
        }
        cout << endl;
    }

};

int main() {
    int n{0}, m{0}, v{0};

    cin >> n >> m >> v;

    SearchMatGraph graph(n);

    for(int i{0}; i < m; i++){
        int b, e;
        cin >> b >> e;
        graph.insertEdge(b, e);
    }

    graph.dfsStart(v);
    graph.bfsStart(v);

    return 0;
}