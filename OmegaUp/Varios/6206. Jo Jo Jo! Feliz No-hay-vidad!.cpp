#include <bits/stdc++.h>

using namespace std;

int N,acciones,buenas,malas,porto;
string nombre;
char c;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> nombre >> acciones;
        buenas = 0;
        malas = 0;
        for (int j=0;j<acciones;j++){
            cin >> c;
            if(c=='B') buenas++;
            else if(c=='M') malas++;
        }
        malas*=2;
        porto = buenas-malas;
        if(porto<=0){
            cout << nombre << " CARBON" << '\n';
        } else {
            cout << nombre << " REGALO" << '\n';
        }
    }
    return 0;
}