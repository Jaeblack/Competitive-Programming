#include <bits/stdc++.h>

using namespace std;

unordered_map<string,string> padre;
int N;
string texto, respuesta= "";

string buscaPadre(string nodo){
    if(padre.find(nodo) == padre.end()){ // no tiene padre
        padre[nodo] = nodo;
        return nodo;
    }else{
        if(padre[nodo] == nodo){
            return nodo;
        } else {
            return padre[nodo] = buscaPadre(padre[nodo]);
        }
    }
}
bool une(string u, string v){
    string padreU = buscaPadre(u);
    string padreV = buscaPadre(v);
    if(padreU == padreV) return false;

    int tamaPU = padreU.size();
    int tamaPV = padreV.size();

    if(tamaPU == tamaPV){
        string menor = padreU < padreV ? padreU: padreV;
        string mayor = padreU < padreV ? padreV: padreU;
        padre[mayor] = menor;
    } else {
        if(tamaPU < tamaPV){
            padre[padreV] = padreU;
        } else{
            padre[padreU] = padreV;
        }
    }
    return true;
}


void resuelve(){
    int primera = texto.find(' ');
    string suba = "";
    //cout  << "Primera  " << primera<< "\n";


    while(primera != -1){
         suba = texto.substr(0,primera);
         //cout << primera<< suba  << primera<< "\n";
         respuesta+=buscaPadre(suba);
         respuesta+= " ";
         //cout << buscaPadre(suba) << '\n';
         texto = texto.substr(primera+1,texto.size()-primera-1);
         primera = texto.find(' ');
         primera = primera;
    }
    suba = texto;
    respuesta+=buscaPadre(suba);
    respuesta+= " ";
    //cout << 1 << texto << 1 << '\n';
    //cout << buscaPadre(suba) << '\n';
    cout << respuesta << '\n';
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    string uno,dos,minima,maxa, respuesta, padreUno,padreDos;
    bool seUnieron;

    cin >> N;
    for(int i=1; i<=N; i++){
        cin >> uno >> dos;
        seUnieron = une(uno,dos);
    }
    getline(cin,texto);
    getline(cin,texto);
    resuelve();



    return 0;
}
/*

8
sea see
see c
you u
and an
n an
are r
ok k
k z
i sea you and you are ok


*/

