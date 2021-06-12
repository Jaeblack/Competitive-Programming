#include <bits/stdc++.h>

using namespace std;
long long int N,M,i;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> N >> M;
    if(N%2==0) i = N;
    else i = N+1;
    for(;i<=M;i+=2){
        cout << i << '\n';
    }

    return 0;
}