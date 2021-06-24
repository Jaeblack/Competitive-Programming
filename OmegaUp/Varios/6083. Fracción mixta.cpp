#include <bits/stdc++.h>

using namespace std;
long long int n,d,a,b;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> d;
    a = n/d;
    b = n%d;
    cout << a;
    if(b) cout << " " << b << "/" << d;
    return 0;
}