#include <bits/stdc++.h>

using namespace std;
long long int mino=0,N,ini,fin,arr[109],i;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    for(i=0;i<N;i++){
        cin >> arr[i];
    }
    cin >> ini >> fin;
    mino = ini;
    for(i=ini;i<=fin;i++){
        if(arr[i] < arr[mino]) mino = i;
    }
    cout << mino;
    return 0;
}