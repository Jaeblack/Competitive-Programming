#include <iostream>
using namespace std;
#define LONGUITUD 1002

/***
3 4 6
....
.T..
....
*/

char mapa[7][7];   // tabla para indicar terreno
int R,C,K;                            // tamaño del terreno, renglon y columna

int Caminos=0;



void buscar(int r, int c , int k){
if (k>0){
    if (mapa[r][c]!='x'){  /// no visitado
        if (mapa[r][c]!='T'){ /// que no es arbol
           if (r>=1 and r<=R and c>=1 and c<=C){///que sea una posicion valida
                if (r==1 and c==C){ /// llege al establo
                    Caminos=Caminos+1;
                    return ;
                }
                mapa[r][c]='x';    /// marco como visitado
                buscar(r+1,c,k-1);
                buscar(r-1,c,k-1);
                buscar(r,c+1,k-1);
                buscar(r,c-1,k-1);
                mapa[r][c]='.'; /// desmarco visitados para hacer busqueda exaustiva
           }

        }


    }
}
}

int main() {
            cin >> R>> C>> K;
            for (int i=1; i<=R;i++){
        for (int j=1; j<=C;j++){
            cin >> mapa[i][j];
        }
            }

    buscar(R,1, K); // dejando en miTerrreno el tamaño de mi terreno
            cout << Caminos<< endl;
            return 0;
}