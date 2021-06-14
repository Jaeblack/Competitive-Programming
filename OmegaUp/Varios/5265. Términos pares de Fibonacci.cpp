#include <bits/stdc++.h>

using namespace std;
long long int N,i,act=1,ante=0,sig,M,cuantos,suma;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

        cin >> N;
        act=1,ante=1,sig=0;
        while(act <= N){
            if(((act)&(-act)) != 1) suma+= act;
            sig = act + ante;
            ante = act;
            act = sig;
        }
        cout << suma << '\n';

    return 0;
}