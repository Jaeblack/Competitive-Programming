#include <bits/stdc++.h>

using namespace std;
long long int N,i,act=1,ante=0,sig;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    for(i=1;i<=N;i++){
        cout << act << " ";
        sig = act + ante;
        ante = act;
        act = sig;
    }
    return 0;
}