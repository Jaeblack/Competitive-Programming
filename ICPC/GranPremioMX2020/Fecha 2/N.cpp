#include <bits/stdc++.h>

using namespace std;

#define LimSUP 1e15
#define LimINF 31622777



unsigned long long int cuantos;
vector<unsigned long long int> criba(LimINF);
vector<unsigned long long int> primos;
vector<unsigned long long int> factores(1003);
vector<unsigned long long> enes(1003);
vector<bool> usados;
set<unsigned long long int> extra;
unsigned long long int M, N, K, grado, factor, tamanio;

void cribale(){
    for(unsigned long long int i=2; i<=LimINF; i++){
        if(!criba[i]){
            primos.push_back(i);
            for(unsigned long long int a=i*i; a<=LimINF; a+=i){
                criba[a]=1;
            }
        }
    }
}

void busca(unsigned long long int n,unsigned long long int cuantosFactores){
    for(unsigned long long int i= 0; (i<tamanio && cuantosFactores >0 && (primos[i]* primos[i]) <=n ); i++){
        if(n%primos[i] == 0){
            usados[i] = true;
            cuantosFactores--;
            while(n%primos[i] == 0){
                n /= primos[i];
            }
        }
    }
    if(cuantosFactores){
        extra.insert(n);
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cribale();
    tamanio = primos.size();
    usados.resize(tamanio+2);
    cin >> M >> N >> K;
    for(unsigned long long int i =1; i<=N; i++){
        cin >> enes[i];
    }
    unsigned long long int m,n,d;
    for(unsigned long long int i=0; i<K; i++){
        cin >> m >> n >> d;
        factores[n]++;
    }
    for(unsigned long long int i=1; i<=N; i++){
        busca(enes[i], factores[i]);
    }
    //unsigned long long int cestras = extra.size();
    unsigned long long int utilizados = 0;
    for(unsigned long long int i=0; i<tamanio; i++){
        if(usados[i]){
            if(utilizados > 0){
                cout << " ";
            }
            cout << primos[i];
            utilizados++;
        }
    }
    unsigned long long int otroUsados = 0;
    for(unsigned long long int ex : extra){
        if(utilizados > 0){
            cout << " ";
        }else if( otroUsados > 0){
            cout << " ";
        }
        cout << ex << " ";
        otroUsados++;
    }

    return 0;
}
