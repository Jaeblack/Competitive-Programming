#include <bits/stdc++.h>

using namespace std;
long long int a,b,c,d,r;
int esta[7] = {0,580,980,1190,1250,1420,3000};
int N;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> a;
    if(a > 0){
        cout << "POSITIVO";
    } else if(a < 0){
        cout << "NEGATIVO";
    } else {
        cout << "CERO";
    }

    return 0;
}