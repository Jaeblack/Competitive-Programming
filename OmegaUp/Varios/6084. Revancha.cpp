#include <bits/stdc++.h>

using namespace std;
long long int mino = INT_MAX,maxo = INT_MIN,promed,N,act;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> act;
        promed+= act;
        if(act < mino) mino = act;
        if(act > maxo) maxo = act;
    }
    promed/=N;
    cout << mino << " " << maxo << " " << promed << '\n';
    return 0;
}