#include <bits/stdc++.h>

using namespace std;
long long int camion[10009];
long long int x,i,n,p;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> p;
    for(i=1;i<=n;i++){
        cin >> x;
        camion[i] = x;
    }
    for(i=1;i<=p;i++){
        cin >> x;
        cout << camion[x] << '\n';
    }
    return 0;
}