#include <bits/stdc++.h>

using namespace std;

long long int m,n,act,falta,c;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> m >> n;
    falta = (n*(n+1))/2;
    
    act = (m*(m-1))/2;
    
    falta-= act;
    cout << falta << '\n';
    return 0;
}