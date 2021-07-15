#include <bits/stdc++.h>

using namespace std;
typedef vector< long long int> VLLI;
typedef vector<VLLI> VVLLI;
short int N,suma,i;
unsigned long long int posibilidades;
vector<short int> triangulares(150);
VVLLI realizados;

long long int busca(short int n,short int j){
    if(n== 0) return 1;
    if(n < 0) return 0;
    if(realizados[n][j] == -1){
        unsigned long long int acumulado =0;
        for(short int k=j; k>0; k--){
            acumulado += busca(n-triangulares[k],k)%1019;
        }
        realizados[n][j] =acumulado%1019;
    }
    return realizados[n][j] ;
}
int main()
{
    cin >> N;

    for(i=1; suma<=N; i++){
            suma +=i;
            triangulares[i] = suma;
    }
    realizados.resize(N+2,VLLI(152,-1));
    posibilidades = busca(N,i-1);
    cout << posibilidades%1019 << '\n';

    return 0;
}