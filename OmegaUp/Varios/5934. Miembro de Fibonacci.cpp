#include <bits/stdc++.h>

using namespace std;
long long int N,i,act=1,ante=0,sig,x;
set<long long int> zet;
void construye(long long int fin){
    while(act<=(fin+1)){
        zet.insert(ante);
        sig = act + ante;
        ante = act;
        act = sig;
    }
    zet.insert(ante);
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    for(i=0;i<N;i++){
        cin >> x;
        construye(x);
        if(zet.find(x) == zet.end()){
            cout << "NO"<< '\n';
        } else {
            cout << "SI" << '\n';
        }
    }


    return 0;
}