#include <bits/stdc++.h>

using namespace std;
vector<vector<int> > adys(100007);
stack<int> pila;
vector<bool> inStack(100007);
vector<bool> visit(100007);
long long int costos[100007];
unsigned long long int total,posis=1;

int discTempo[100007];
int minTempo[100007];
int minimos;
int cuantos;
int N,M,u,v,T=1,C=1;
void saca(int nodo){
    int tope;
    minimos = INT_MAX;
    cuantos = 1;
    do{
        tope = pila.top();
        pila.pop();
        inStack[tope] = false;
        if(costos[tope] < minimos){
            minimos = costos[tope];
            cuantos = 1;
        }else if(costos[tope] == minimos){
            cuantos++;
        }

    }while(tope != nodo);
    posis*= cuantos;
    posis%= 1000000007;
    total+= minimos;
    C++;
}
void Tarjan(int nodo){
    if(visit[nodo]) return;
    visit[nodo] = true;
    minTempo[nodo] = discTempo[nodo] = T++;
    pila.push(nodo);
    inStack[nodo] = true;
    for(int next : adys[nodo]){
        Tarjan(next);
        if(inStack[next]){
            minTempo[nodo] = min(minTempo[next],minTempo[nodo]);
        }
    }
    if(inStack[nodo]){
        if(minTempo[nodo] == discTempo[nodo]){
            saca(nodo);
        }
    }

}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    for(int i=1; i<=N;i++){
        cin >> costos[i];
    }
    cin >> M;
    for(int i=1;i<=M;i++){
        cin >> u >> v;
        adys[u].push_back(v);
    }
    for(int i=1;i<=N;i++){
        Tarjan(i);
    }
    cout << total << " " << posis << '\n';
    return 0;
}
