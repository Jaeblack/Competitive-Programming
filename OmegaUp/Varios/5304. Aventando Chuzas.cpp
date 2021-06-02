#include <bits/stdc++.h>

using namespace std;
int N;
long long int maxo = LLONG_MIN,total,act;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    for(int i=0; i<7; i++){
        cin >> act;
        total+= act;
        if(act > maxo) maxo = act;
    }
    cout << total/7 << '\n' << maxo;
    return 0;
}