#include <bits/stdc++.h>

using namespace std;
long long int a,b,c,d,r;
int esta[7] = {0,580,980,1190,1250,1420,3000};
int N;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> a;
    if(a < 540 || a > 1520){
        cout << "error";
    } else {
        for(b=1;b<=5;b++){
            if(a >= esta[b] && a < esta[b+1] ){
                c = b;
                break;
            }
        }
        d = esta[c+1] - a;
        r = a - esta[c];
        if(d <= r){
            cout << "adelante " << d;
        } else {
            cout << "atras " << r;
        }
    }

    return 0;
}