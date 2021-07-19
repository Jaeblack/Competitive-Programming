#include <bits/stdc++.h>

using namespace std;
typedef vector<int> VI;
typedef vector<VI> VVI;
VVI MAPA,respuesta;
int R,C,ri,ci,i,j;
int movs[4][2] = {{1,0},{0,-1},{-1,0},{0,1}};
pair<int,int> ElPozo;

pair<int,int> encuentra_pozo(int r,int c){
    while(MAPA[r][c] != -1){
        if(MAPA[r][c] == 0) r--;
        if(MAPA[r][c] == 1) c++;
        if(MAPA[r][c] == 2) r++;
        if(MAPA[r][c] == 3) c--;
    }
    return {r,c};
}

void busca_respuesta(short int r,short int c,short int direccion){
    if(r>=1 && c>=1 && r<=R && c<=C){
        if(MAPA[r][c] == direccion){
            if(respuesta[r][c] == 0){
                respuesta[r][c] = 1;
                for(short int k=0; k<4; k++){
                    busca_respuesta(r+movs[k][0], c+movs[k][1],k );
                }
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> R >> C >> ri >> ci;
    MAPA.resize(R+2, VI (C+2));
    respuesta.resize(R+2, VI (C+2));
    for(i=1; i<=R; i++){
        for(j=1; j<=C; j++){
            cin >> MAPA[i][j];
        }
    }
    ElPozo = encuentra_pozo(ri,ci);
    busca_respuesta(ElPozo.first,ElPozo.second,-1);
    for(i=1; i<=R; i++){
        for(j=1; j<=C; j++){
            cout << respuesta[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}