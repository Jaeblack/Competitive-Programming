#include <bits/stdc++.h>

using namespace std;

int T, N;
int casas[60],depe[60];
long long int respuesta1, respuesta2,chida;

void rellena(){
    for(int i=0; i<=55; i++){
        depe[i] = -1;
    }
}
long long int depea(int casita){
    if(casita >= N+1){
        return 0;
    }
    long long int tomoSig = 0, noTomoSig = 0, yo=0;
    if(depe[casita] == -1){
        tomoSig = depea(casita+2);
        noTomoSig = depea(casita+3);
        if(tomoSig > noTomoSig){
            yo = tomoSig;
        } else {
            yo = noTomoSig;
        }
        yo += casas[casita];
        depe[casita] = yo;
    }
    return depe[casita];
}

int main()
{

    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> T;
    for(int i=1;i <=T; i++){

        cin >> N;
        for(int j =1 ; j<= N; j++){
            cin >> casas[j];
        }
        rellena();
        respuesta1 = depea(1);
        respuesta2 = depea(2);
        chida = respuesta1 > respuesta2? respuesta1:respuesta2;

        cout << chida<< '\n';
    }


    return 0;
}

/*
3
3
1 2 3
8
9 21 33 31 21 84 86 53
2
83 34

*/
