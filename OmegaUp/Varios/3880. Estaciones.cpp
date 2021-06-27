#include <bits/stdc++.h>

using namespace std;
long long int a,b,c,d,r;
int esta[7] = {0,580,980,1190,1250,1420,3000};
int N;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> a;
    if(a < 1 || a > 12){
        cout << "ERROR";
    } else if(a== 12 || a == 1 || a == 2){
        cout << "INVIERNO";
    } else if(a== 3 || a == 4 || a == 5){
        cout << "PRIMAVERA";
    } else if(a== 6 || a == 7 || a == 8){
        cout << "VERANO";
    } else if(a== 9 || a == 10 || a == 11){
        cout << "OTONIO";
    }

    return 0;
}