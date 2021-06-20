#include <bits/stdc++.h>

using namespace std;
long long int mino=INT_MAX,maxo=INT_MIN,dife,n,i;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    for(i=0;i<10;i++){
        cin >> n;
        if(n < mino) mino = n;
        if(n > maxo) maxo = n;
    }
    cout << mino << " " << maxo << " " << (maxo-mino) ;
    return 0;
}