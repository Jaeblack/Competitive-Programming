#include <bits/stdc++.h>

using namespace std;
long long int N,M,i;
char chairo;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    do{
        cin >> chairo;
        if(chairo == 'A') N++;
    } while(chairo != '.');

    cout << N;

    return 0;
}