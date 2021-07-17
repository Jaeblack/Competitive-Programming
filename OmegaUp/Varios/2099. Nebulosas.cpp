#include <bits/stdc++.h>

using namespace std;
typedef vector<int> VI;
typedef vector<VI> VVI;
VVI MAPA,visitados;
short int R,C,i,j,mayor,diferencia;
short int movs[8][2] = {{1,0},{0,-1},{-1,0},{0,1}/*,{1,1},{-1,-1},{1,-1},{-1,1}*/};
int cuantos= 1;
pair<short int, short int> cmayor, actual, nuevo;
queue<pair<short int, short int> > COLA;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> R >> C >> diferencia;
    MAPA.resize(R+2, VI (C+2));
    visitados.resize(R+2, VI (C+2));
    for(i=1; i<=R; i++){
        for(j=1; j<=C; j++){
            cin>> MAPA[i][j];
            if(MAPA[i][j] > mayor){
                mayor = MAPA[i][j];
                cmayor = {i,j};
            }
        }
    }
    visitados[cmayor.first][cmayor.second] = 1;
    COLA.push(cmayor);
    while(!COLA.empty()){
        actual = COLA.front(); COLA.pop();
        for(i=0;i <8; i++){
            nuevo.first= actual.first + movs[i][0];
            nuevo.second= actual.second + movs[i][1];
            if(nuevo.first >= 1 && nuevo.first <= R &&
               nuevo.second>= 1 && nuevo.second<= C){
               if(visitados[nuevo.first][nuevo.second] != 1){
                   if(MAPA[actual.first][actual.second] -
                      MAPA[nuevo.first][nuevo.second] <= diferencia){
                        visitados[nuevo.first][nuevo.second] = 1;
                        cuantos++;
                        COLA.push(nuevo);
                   }
               }
            }
        }
    }


    cout << cuantos << '\n';

    return 0;
}