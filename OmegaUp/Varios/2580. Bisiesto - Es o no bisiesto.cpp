#include <bits/stdc++.h>

using namespace std;
long long int N,M,i;
char chairo;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    
        cin >> N;
    if((N%4==0 && N%100!=0) || (N%100 == 0 && N%400 == 0)) {
        cout << "ES BISIESTO" << '\n';
    } else {
        cout << "NO ES BISIESTO" << '\n';
    }
    
    

    return 0;
}