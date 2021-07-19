#include <bits/stdc++.h>

using namespace std;
typedef vector<char> VC;
typedef vector<VC> VVC;
VVC MAPA;
int R,C,Npuentes,i,j;
int movs[4][2]= {{0,1},{0,-1},{1,0},{-1,0}};

int busca(short int r, short int c){
    int regreso=1;
    if(r>=1 && r <=R && c>=1 && c<=C){
        if(MAPA[r][c]!='.'){
            if(MAPA[r][c] == 'x') regreso = 0;
            MAPA[r][c] = '.';
            for(short int k=0; k<4; k++){
                regreso*= busca(r+movs[k][0],c+movs[k][1]);
            }
        }
    }
    return regreso;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> R >> C;
    MAPA.resize(R+2,VC (C+2));
    for(i=1; i<=R; i++){
        for(j=1; j<=C; j++){
            cin >> MAPA[i][j];
        }
    }
    for(i=1; i<=R; i++){
        for(j=1; j<=C; j++){
            if(MAPA[i][j] != '.'){
                Npuentes += busca(i,j);
            }
        }
    }
    if(Npuentes>0) Npuentes--;
    cout << Npuentes << '\n';
    return 0;
}