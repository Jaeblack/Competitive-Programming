#include <bits/stdc++.h>

using namespace std;

string palabra;
int T, K;

void muevele(){
    string nuevaPalabra = "", repetida = "";
    char letra;
    int tamanio = palabra.size();
    long long int nuevoTamanio =0, repeticiones = 0;
    bool repetir = false;
    bool sePudo = true;

    for(int i=0; i< tamanio; i++){
        letra = palabra[i];
        if(letra >= '0' && letra <= '9'){
            repeticiones*= 10;
            repeticiones+= (letra -'0');
            repetir = true;
            if(nuevaPalabra.size() + repeticiones > K){
                    sePudo = false;
                    break;
            }
        } else {
            if(repetir){
                if(nuevaPalabra.size() + repeticiones > K){
                    sePudo = false;
                    break;
                }
                repetida = "";
                for(int j=0; j<repeticiones; j++){
                    repetida+=letra;
                }
                nuevaPalabra += repetida;
            } else {
                nuevaPalabra += letra;
            }
            repeticiones = 0;
            repetir = false;
        }
        if(nuevaPalabra.size() > K){
            sePudo = false;
        }
    }
    if(sePudo){
        cout << nuevaPalabra << '\n';
    } else {
        cout << "unfeasible" << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> palabra >> K;
        muevele();
    }
    return 0;
}
