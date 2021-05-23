#include <bits/stdc++.h>

using namespace std;

unsigned long long int lados[55];
unsigned long long int pascal[55][60];
unsigned long long int N;

bool valido(unsigned long long int a,unsigned long long int b,unsigned long long int c){
    unsigned long long int suma = a+b;
    if(suma>c){
        return true;
    } else {
        return false;
    }
}

long long int binaria(unsigned long long int inicio,unsigned long long int siguiente){
    unsigned long long int izq = siguiente+1, der = N, mitad;
    while(izq < der){
        mitad = ((izq+der)/2)+1;
        if(valido(lados[inicio], lados[siguiente], lados[mitad])){
            izq = mitad;
        } else {
            der = mitad-1;
        }
    }
    if(valido(lados[inicio], lados[siguiente], lados[izq])){
        return izq;
    } else {
        return -1;
    }
}

unsigned long long int combina(unsigned long long int ene){

    unsigned long long int resp = (unsigned long long int) (1ull<<(unsigned long long int)(ene));
    resp -=1;
    return resp;
}

void cuenta(){
    unsigned long long int respuesta=0;
    long long int indice;
    unsigned long long int cuantos;
    unsigned long long int posibilidades;

    for(unsigned long long int i=1; i<=N-2; i++){
        for(unsigned long long int j=i+1; j<=N-1; j++){
            indice = binaria(i,j);
            if(indice != -1){
                cuantos = indice - j;
                posibilidades = combina(cuantos);
                respuesta += posibilidades;
            }
        }
    }
    cout << respuesta<< '\n';
}
/*
void precalcula(){
    pascal[1][1] = 1;
    unsigned long long int suma;
    for(int i=2; i<=52; i++){
        pascal[i][1] = 1;
        suma = 1;
        for(int j=2; j<=i; j++){
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            suma+= pascal[i][j];
        }
        pascal[i][0] = suma;
    }
    for(int i=0; i<=50; i++){
        for(int j=0; j<=i; j++){
            cout << pascal[i][j] <<" ";
        }
        cout << '\n';
    }
}
*/
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);



    cin >> N;
    for(unsigned long long int i=1; i<=N; i++){
        cin >> lados[i];
    }
    sort(lados+1,lados+N+1);
    cuenta();

    return 0;
}
