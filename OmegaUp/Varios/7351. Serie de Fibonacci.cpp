#include <bits/stdc++.h>

using namespace std;
long long int N,i,act=1,ante=0,sig,M,cuantos;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

        cin >> N >> M;
        act=1,ante=0,sig=0;
        while(ante <= M){
            if(act > N && act < M) cuantos++;
            sig = act + ante;
            ante = act;
            act = sig;
        }
        cout << cuantos << '\n';

    return 0;
}