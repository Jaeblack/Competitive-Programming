#include <bits/stdc++.h>

using namespace std;

char mapa[10][10];
int visitado[10][10];
int tamanios[10];
long long int respuesta,respue2 = 0;
int N,K;


void muestra(){
    cout << "Una valida\n";
    for(int i=1; i<=N; i++){
        for(int j= 1; j<= N; j++){
            cout << visitado[i][j] << " ";
        }
        cout << '\n';
    }
}
void rellena(){
    for(int i=1; i<=N; i++){
        for(int j= 1; j<= N; j++){
            visitado[i][j] = 0;
        }
    }
}
void desmarcaV(int ren,int col, int barco){
    int limiteInferior = ren+ tamanios[barco]-1;
    for(int i=ren; i<=limiteInferior; i++){
            visitado[i][col] = 0;
    }
}
bool checaVertical(int ren,int col, int barco){
    bool vaBien = true;
    int limiteInferior = ren+ tamanios[barco]-1;
    if(limiteInferior > N) return false;
    for(int i=ren; i<=limiteInferior; i++){
        if(visitado[i][col] == -1 || visitado[i][col] > 0){
            vaBien = false;
        }
    }
    if(vaBien){
        for(int i=ren; i<=limiteInferior; i++){
            visitado[i][col] = barco;
        }
        return true;
    }
    return false;
}
void desmarcaH(int ren,int col, int barco){
    int limiteLateral = col+ tamanios[barco]-1;
    for(int j=col; j<=limiteLateral; j++){
            visitado[ren][j] = 0;
    }
}
bool checaHorizontal(int ren,int col, int barco){
    bool vaBien = true;
    int limiteLateral = col+ tamanios[barco]-1;
    if(limiteLateral > N) return false;
    for(int j=col; j<=limiteLateral; j++){
        if(visitado[ren][j] == -1 || visitado[ren][j] > 0){
            vaBien = false;
        }
    }
    if(vaBien){
        for(int j=col; j<=limiteLateral; j++){
            visitado[ren][j] = barco;
        }
        return true;
    }
    return false;
}

bool revisaSiEsValido(){
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            if(mapa[i][j] == 'O'){
                if(visitado[i][j] < 1) return 0;
            }
        }
    }
    //muestra();
    respue2++;
    return true;
}
long long int busqueda(int barco){
    if (barco > K){
        return revisaSiEsValido();
    }
    long long int posibilidades = 0;
    bool siCabeVert = false;
    bool siCabeHori = false;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            if(tamanios[barco] == 1){
                siCabeHori = checaHorizontal(i,j,barco);
                if(siCabeHori){
                    posibilidades += busqueda(barco+1);
                    desmarcaH(i,j,barco);
                }
            }else {
                siCabeVert = checaVertical(i,j,barco);
                if(siCabeVert){
                    posibilidades += busqueda(barco+1);
                    desmarcaV(i,j,barco);
                }
                siCabeHori = checaHorizontal(i,j,barco);
                if(siCabeHori){
                    posibilidades += busqueda(barco+1);
                    desmarcaH(i,j,barco);
                }
            }

        }
    }
    return posibilidades;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin >> N >> K;
    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            cin >> mapa[i][j];
            if(mapa[i][j] == 'X') visitado[i][j] = -1;
        }
    }
    for(int i= 1; i<=K; i++){
        cin >> tamanios[i];
    }
    respuesta = busqueda(1);
    cout << respue2 << '\n';


  return 0;
}
