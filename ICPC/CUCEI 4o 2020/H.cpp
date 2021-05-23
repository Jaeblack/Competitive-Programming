#include <bits/stdc++.h>


#define MODULO 1000000007
using namespace std;
long long int T,N,A,B,respuesta;

vector< vector< long long int > > combisDEPE(10004, vector<long long int> (10004, -1));

long long int laCombi(long long int n, long long int x){
    if(x > n){
        return 0;
    }
    if(n == x){
        return 1;
    }else if(n == 1){
        return 1;
    } else if(x == 1){
        return n;
    }
    if(combisDEPE[n][x] == -1){
        long long int uno = laCombi(n-1,x)%MODULO;
        long long int dos = laCombi(n-1,x-1)%MODULO;
        uno = (uno+dos)%MODULO;
        combisDEPE[n][x] = uno;
    }
    return combisDEPE[n][x];

}



int main()
{

    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> T;

    for(long long int i=0; i<T; i++){
        cin >> N >> A >> B;
        respuesta = 0;
        for(long long int j= A; (j<=B && j<=N); j++){
            respuesta += laCombi(N,j);
            respuesta%=MODULO;
        }
        cout << respuesta << '\n';
    }


    return 0;
}
