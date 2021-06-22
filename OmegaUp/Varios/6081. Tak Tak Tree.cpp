#include <bits/stdc++.h>

using namespace std;
long long int f,dias,valor,i;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> f;
    i = 0;
    valor = f;
    while(true){
        if((valor-1)%11 == 0){
            cout << i << " " << valor;
            return 0;
        }
        valor += valor;
        i++;
    }
    return 0;
}