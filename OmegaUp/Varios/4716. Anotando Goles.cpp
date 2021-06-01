#include <bits/stdc++.h>

using namespace std;

long long int m,n,act,falta,c;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> m >> n;
    for(int i=0;i<n;i++){
        cin >> act;
        if (act > m) c++;
    }
    cout << act-m << '\n' << c << '\n' ;
    return 0;
}