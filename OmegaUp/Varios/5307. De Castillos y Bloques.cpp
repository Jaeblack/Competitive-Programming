#include <bits/stdc++.h>

using namespace std;
int N,x,i;
long long int alturas[1009],total;
stack<int> pila;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    alturas[0] = LLONG_MAX;
    pila.push(0);
    cin >> N;
    for(i=1;i<=N;i++){
        cin >> alturas[i];
        while(alturas[i] > alturas[pila.top()]) pila.pop();
        x = pila.top();
        cout << i-x << '\n';
        pila.push(i);
        total+= (i-x);
    }
    cout << total << '\n';
    return 0;
}