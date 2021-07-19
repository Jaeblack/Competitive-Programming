#include <bits/stdc++.h>

using namespace std;
typedef vector<char> VC;
typedef vector<VC> VVC;
VVC MAPA;
short int R,C,i,ri,ci,j;
void busca(short int r,short int c, char tipo){
    if(r>=1 && r<=R && c>=1 && c<=C){
            if(MAPA[r][c] < tipo){
                char cosa = MAPA[r][c];
                MAPA[r][c] = 'X';
                busca(r,c-1,cosa);
                busca(r,c+1,cosa);
                busca(r-1,c,cosa);
                busca(r+1,c,cosa);
                busca(r-1,c-1,cosa);
                busca(r+1,c-1,cosa);
                busca(r-1,c+1,cosa);
                busca(r+1,c+1,cosa);
            }
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> R >> C >> ri >> ci;
     MAPA.resize(R+2, VC (C+2));
    for(i=1; i<= R; i++){
        for(j=1; j<=C; j++){
            cin >> MAPA[i][j];
        }
    }
    busca(ri,ci,100);
    for(i=1; i<= R; i++){
        for(j=1; j<=C; j++){
            cout << MAPA[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}