#include <bits/stdc++.h>

using namespace std;
long long int N,i,act=1,ante=0,sig;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    for(int j=0;j<3;j++){
        cin >> N;
        act=1,ante=0,sig=0;
        for(i=1;i<=N;i++){
            sig = act + ante;
            ante = act;
            act = sig;
        }
        cout << ante << '\n';
    }
    return 0;
}