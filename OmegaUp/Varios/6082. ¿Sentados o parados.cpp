#include <bits/stdc++.h>

using namespace std;
long long int r,s,b,t,P,S;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> r >> s >> b;
    t = r*s;
    if(b<t){
        S = b;
    } else{
        S = t;
        P = b-t;
    }
    cout << S << " " << P;
    return 0;
}