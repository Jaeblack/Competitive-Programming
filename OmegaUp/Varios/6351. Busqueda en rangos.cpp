#include <bits/stdc++.h>

using namespace std;
bool simon;
long long int arr[100009],i,K,N,ini,fini,C;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    for(i=0;i<N;i++){
        cin >> arr[i];
    }
    cin >> K;
    for(i=0;i<K;i++){
        cin >> ini >> fini >> C;
        simon = false;
        for(int j=ini;j<=fini;j++){
            if(arr[j] == C){
                simon = true;
                break;
            }
        }
        if(simon){
            cout << "SI" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}