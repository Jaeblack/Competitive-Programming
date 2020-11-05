#include <bits/stdc++.h>

using namespace std;

struct Path{
    long long int v, weight;
    const bool operator < (const Path other) const{
        return weight > other.weight;
    }
};

vector<vector<Path> > adjacencies;
vector<bool> visited;

priority_queue<Path> pathsQ;

Path actual, nextV;
long long int T, N, M, origin, destiny, U, V,answer;


long long int dijkstra(){
    actual.v = origin;
    actual.weight = 0;
    pathsQ.push(actual);
    visited[origin] = true;
    while(!pathsQ.empty()){
        actual = pathsQ.top();
        pathsQ.pop();
        if(actual.v == destiny){
            return actual.weight;
        }
        visited[actual.v] = true;
        for(Path p: adjacencies[actual.v]){
            if(!visited[p.v]){
                nextV.v = p.v;
                nextV.weight = actual.weight + p.weight;
                pathsQ.push(nextV);
            }
        }
    }
    return -1;
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> T;
    for(int i=0; i<T; i++){
        cin >> N >> M >> origin >> destiny;
        adjacencies.resize(0);
        adjacencies.resize(N+3,vector<Path> ());
        visited.resize(0);
        visited.resize(N+3,false);
        for(int j=0; j<M ; j++){
            cin >> U >> V >> actual.weight;
            actual.v = V;
            adjacencies[U].push_back(actual);
            actual.v = U;
            adjacencies[V].push_back(actual);
        }
        answer = dijkstra();
        if(answer != -1){
            cout << answer << '\n';
        } else {
            cout << "NONE\n";
        }
    }
    return 0;
}
/*

2
4 2 1 4
1 2 5
3 4 5
4 4 1 4
1 2 5
2 3 5
3 4 5
4 2 6

*/
