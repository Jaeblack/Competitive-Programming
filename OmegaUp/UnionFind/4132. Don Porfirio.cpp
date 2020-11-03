#include <bits/stdc++.h>

using namespace std;

#define MODULO 1000000007

struct Arista{
    int x,y,b;
    const bool operator < (const Arista otro) const{
        return b == otro.b? x < otro.x : b > otro.b;
    }
};

priority_queue<Arista> cola;
vector<int> padre(100005);
vector<int> altura(100005);
vector<int> ancho(100005);
int N;
Arista nueva, actual;
unsigned long long int respuesta = 0, auxu, auxv, aux;

int buscaPadre(int hijo){
    if(padre[hijo] == hijo) return hijo;
    return padre[hijo] = buscaPadre(padre[hijo]);
}
void une(int u, int v){
    int padreU = buscaPadre(u);
    int padreV = buscaPadre(v);

    if(padreU == padreV) return;
    if(altura[padreU] > altura[padreV]){
        padre[padreV] = padreU;
        aux = ((ancho[padreU]%MODULO) * (ancho[padreV]%MODULO)) % MODULO;
        aux = (aux * actual.b) % MODULO;
        respuesta += aux;
        respuesta %= MODULO;
        ancho[padreU] += ancho[padreV];
    } else if(altura[padreV] > altura[padreV]){
        padre[padreU] = padreV;
        aux = ((ancho[padreU]%MODULO) * (ancho[padreV]%MODULO)) % MODULO;
        aux = (aux * actual.b) % MODULO;
        respuesta += aux;
        respuesta %= MODULO;
        ancho[padreV] += ancho[padreU];
    } else {
        padre[padreU] = padreV;
        altura[padreV]++;
        aux = ((ancho[padreU]%MODULO) * (ancho[padreV]%MODULO)) % MODULO;
        aux = (aux * actual.b) % MODULO;
        respuesta += aux;
        respuesta %= MODULO;
        ancho[padreV] += ancho[padreU];
    }
}
void rellena(){
    for(int i=0; i<=100002; i++){
        padre[i] = i;
        altura[i] = 1;
        ancho[i] = 1;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    rellena();
    cin >> N;

    for(int i=1; i<N; i++){
        cin >>nueva.x >> nueva.y >> nueva.b;
        cola.push(nueva);
    }

    while(!cola.empty()){
        actual = cola.top();
        cola.pop();
        une(actual.x,actual.y);
    }
    cout << respuesta << '\n';

    return 0;
}



/*

5
1 2 1
1 3 1
2 4 2
2 5 2

*/