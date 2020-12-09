#include <bits/stdc++.h>

using namespace std;

struct Cosa{
    vector <int> arreglo;
    int id;
    const bool operator < (const Cosa otro ) const{
        return id < otro.id;
    }
};


vector<Cosa > soluciones;

bool existe[2097155];
long long int problema[25];
long long int N, G, aprobatoria = 0, total;
float aprueba;
bool jala = false;

void usa(int cual, int quedan,vector<int> usados,int suma, int id){
    if(quedan == 0) return;
    suma += problema[cual];
    id += pow(2,(cual));
    usados.push_back(cual);
    if( ((suma*100)/total) >= G){
        if(!existe[id]){
            existe[id] = true;
            jala = true;
            Cosa solucion;
            solucion.arreglo = usados;
            solucion.id = id;
            soluciones.push_back(solucion);
            return;
        }
    }
    for(int i=cual+1; i<N; i++){
        usa(i,quedan-1,usados,suma,id);
    }
}

void rifate(){
    int aUsar;
    for(int i=1; i<=N; i++){
        aUsar = i;
        for(int j= 0; j<N; j++){
            vector<int> usados;
            usa(j,aUsar,usados,0,0);
        }
        if(jala) break;
    }
    cout << aUsar << " " << soluciones.size() << '\n';
    sort(soluciones.begin(),soluciones.end());
    for(Cosa vektorCosa: soluciones){
        vector<int> vektor = vektorCosa.arreglo;
        int promedio =0;
        for(int i=0; i<vektor.size(); i++){
            promedio += problema[vektor[i]];
        }
        promedio *= 100;
        promedio /= total;
        cout << promedio << " ";
        for(int i=0; i<vektor.size()-1; i++){
            cout << vektor[i]+1 << " ";
        }
        cout << vektor[vektor.size()-1]+1 << '\n';

    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N >> G;
    for(int i=0; i<N; i++){
        cin >> problema[i];
        aprobatoria += problema[i];
    }
    total = aprobatoria;
    aprobatoria *= G;
    aprueba = aprobatoria;
    aprobatoria /= 100;
    aprobatoria /= 100;
    rifate();
    return 0;
}
