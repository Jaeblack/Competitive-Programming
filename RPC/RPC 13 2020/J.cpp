#include <bits/stdc++.h>


using namespace std;


struct Paciente{
    long long int llegada;
    long long int prioridad;
    string nombre;

    const bool operator < (const Paciente otro) const{
        if(prioridad == otro.prioridad){
            return llegada > otro.llegada;
        } else{
            return prioridad > otro.prioridad;
        }
    }
};


priority_queue<Paciente> cola;
long long int N;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    bool otro = false;
    bool hubo = false;
    while(cin >> N){


        long long int atiende, tipo;
        Paciente nuevo;
        for(long long int i=0; i<N; i++){
            cin >> tipo;
            if(tipo==1){
                cin >> nuevo.llegada >> nuevo.prioridad >> nuevo.nombre;
                cola.push(nuevo);
            }else{
                cin >> atiende;
                if(!cola.empty()){
                    nuevo = cola.top();
                    cola.pop();


                    cout << nuevo.llegada << " " << atiende << " " << atiende-nuevo.llegada<< " " << nuevo.nombre << '\n';
                    hubo = true;
                }
            }
        }
        while(!cola.empty()){
            cola.pop();
        }
    }
    return 0;
}
