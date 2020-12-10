#include <bits/stdc++.h>

using namespace std;

long long int performances[100005], izquierda[100005], derecha[100005], altura[100005];
long long int N, B;



int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N >> B;
    for(long long int i=1; i<=N; i++){
        cin >> performances[i];
    }
    performances[0] = performances[N];
    performances[N+1] = performances[1];
    for(long long int i=1; i<=N; i++){
        if (performances[i] > performances[i-1]){
            izquierda[i] = izquierda[i-1] +1;
        } else if(performances[i] != 0){
            izquierda[i] = 1;
        }
    }
    if(performances[1] > performances[N]){
        int i=1;
        bool sigue = true;
        while(sigue){
            izquierda[i] += izquierda[N];
            i++;
            if(i <N && performances[i] > performances[i-1]){
                sigue = true;
            } else sigue = false;
        }
    }
    for(long long int i=N; i>=1; i--){
        if (performances[i] > performances[i+1]){
            derecha[i] = derecha[i+1] +1;
        } else if(performances[i] != 0){
            derecha[i] = 1;
        }
    }

    if(performances[N] > performances[1]){
        int i=N;
        bool sigue = true;
        while(sigue){
            derecha[i] += derecha[1];
            i--;
            if(i >1 && performances[i] > performances[i+1]){
                sigue = true;
            } else sigue = false;
        }
    }
    for(long long int i=1; i<=N; i++){
        altura[i] = max(izquierda[i], derecha[i]);
    }
    for(long long int i=1; i<N; i++){
        cout << (altura[i]*B) << " ";
    }
    cout << (altura[N]*B) << '\n';
    return 0;
}
