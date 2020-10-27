#include <bits/stdc++.h>

using namespace std;

struct Punto{
    int ren, col;
};
struct Estado{
    Punto punto;
    int distancia;
    int quienSoy;

    const bool operator < (Estado otro) const{

        return distancia > otro.distancia;
    }
};

vector<vector<Punto> > ubicaciones;
priority_queue<Estado> cola;

//vector< vector< bool> > visitados(60, vector< vector< bool> > (60, false));

int N,K;
int mapa[60][60];
int depe[60][60];
long long int resp = INT_MAX,respActual;


int dameDistancia(Punto a, Punto b){
    return ((abs(a.ren - b.ren)) + (abs(a.col-b.col)));
}


long long int depea(Estado origen){
    if(origen.quienSoy == K){
        //cout << "Soy un K en:" << origen.punto.ren << "," << origen.punto.col;
        return depe[origen.punto.ren][origen.punto.col] = 0;
    }
    if(origen.punto.ren == 1 && origen.punto.col == 8){
        //xd
    }
    Punto pnuebo;
    Estado enuevo;
    int tama = ubicaciones[(origen.quienSoy+1)].size();

    long long int distaHijo,distaMinHijos = INT_MAX;
    int lugar = (origen.quienSoy+1);
    /*
    for(Punto pnuebo: ubicaciones[lugar]){
        enuevo.punto = pnuebo;
        enuevo.quienSoy = origen.quienSoy+1;
        if(depe[enuevo.punto.ren][enuevo.punto.col] != -1){
            distaHijo = depea(enuevo);
        }
        distaHijo = depe[enuevo.punto.ren][enuevo.punto.col];
        long long int haciaEl = dameDistancia(origen.punto,enuevo.punto);
        if(distaHijo < (distaMinHijos - haciaEl)){
            distaMinHijos = distaHijo + haciaEl;
        }
    }
    */

    for(int x=0; x <tama; x++){
        pnuebo = ubicaciones[origen.quienSoy+1][x];
        enuevo.punto = pnuebo;
        enuevo.quienSoy = origen.quienSoy+1;
        if(depe[enuevo.punto.ren][enuevo.punto.col] == -1){
            distaHijo = depea(enuevo);
        }
        distaHijo = depe[enuevo.punto.ren][enuevo.punto.col];
        long long int haciaEl = dameDistancia(origen.punto,enuevo.punto);
        if(distaHijo < (distaMinHijos - haciaEl)){
            distaMinHijos = distaHijo + haciaEl;
        }
    }

    return depe[origen.punto.ren][origen.punto.col] = distaMinHijos;

}
/*
long long int busqueda(){

    Estado nuevo, actual;
    while(!cola.empty()){
        actual = cola.top(); cola.pop();
        if(actual.quienSoy == K){
            return actual.distancia;
        }
        for(int i= 0; i<N; i++){
            for(int j= 0; j<N; j++){
                if(mapa[i][j] == actual.quienSoy+1){
                    nuevo = actual;
                    nuevo.punto.ren = i;
                    nuevo.punto.col = j;
                    nuevo.quienSoy = mapa[i][j];
                    nuevo.distancia += dameDistancia(nuevo.punto,actual.punto);

                    cola.push(nuevo);
                }
            }
        }

    }
    return -1;
}
*/
int main()
{

    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N >> K;
    ubicaciones.resize(K+3);

    for(int i= 1; i<=N; i++){
        for(int j= 1; j<=N; j++){
            depe[i][j] = -1;
        }
   }


    Punto puntito;
    Estado nuevo;
   for(int i= 1; i<=N; i++){
    for(int j= 1; j<=N; j++){
        cin >> mapa[i][j];
        puntito.ren = i;
        puntito.col = j;
        ubicaciones[mapa[i][j]].push_back(puntito);
    }
   }
   int tamanio = ubicaciones[1].size();
   for(int i=0; i< tamanio; i++){
        puntito = ubicaciones[1][i];
        nuevo.punto = puntito;
        nuevo.quienSoy = 1;
        respActual = depea(nuevo);
        //cout << "una resp: "<< respActual << '\n';
        if(respActual < resp) resp = respActual;
   }
    if(resp == INT_MAX){
        cout << -1 << "\n";
    } else {
        cout << resp << "\n";
    }

   /*
   for(int i= 1; i<=N; i++){
        for(int j= 1; j<=N; j++){
            cout << depe[i][j] << " ";
        }
        cout << "\n";
   }
    */



    return 0;
}
/*
if(mapa[i][j] == 1){
            puntito.ren =i;
            puntito.col = j;
            nuevo.punto = puntito;
            nuevo.distancia = 0;
            nuevo.quienSoy = 1;
            //visitados[i][j] = true;
            cola.push(nuevo);
        }
*/
