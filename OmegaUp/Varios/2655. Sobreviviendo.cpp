#include <bits/stdc++.h>

using namespace std;
typedef vector<int> VI;
typedef vector<VI> VVI;
VVI MAPA,visitados;
int i,j,R,C,ri,ci,maximo = 1;
int movs[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};
set<short int> visis;

void busca(short int r, short int c, set<short int> sti ){
  if(maximo<20){
    if(r>=1 && c >=1 && r<=R && c<=C){
        if(visitados[r][c] == 0){
            if(sti.find(MAPA[r][c])== sti.end()){
                visitados[r][c]= 1;
                sti.insert(MAPA[r][c]);
                for(short int k=0;k<4;k++){
                    busca(r+movs[k][0],c+movs[k][1],sti);
                }
                visitados[r][c] = 0;
            }
            if(sti.size() > maximo) {
                maximo = sti.size();
            }
        }
    }
  }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> ri >> ci >> R >> C;
    MAPA.resize(R+2, VI (C+2));
    visitados.resize(R+2, VI (C+2));
    for(i=1;i<=R;i++){
        for(j=1;j<=C;j++){
            cin >> MAPA[i][j];
        }
    }
    busca(ri,ci,visis);
    cout << maximo << '\n';

    return 0;
}