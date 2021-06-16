#include <bits/stdc++.h>

using namespace std;
long long int N,i,act=1,ante=0,sig;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

        cin >> N;
        act=1,ante=1,sig=0;
        while(true){
            cout << act << '\n';
            sig = act + ante;
            ante = act;
            act = sig;
            if(act >= N) break;
        }


    return 0;
}