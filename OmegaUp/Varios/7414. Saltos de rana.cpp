#include <bits/stdc++.h>

using namespace std;

int arr[100009],i,N,M,x,p=1,b,saltos,queda,ultimo,pudo;
char c;





int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N >> M;
    arr[1] = -1;
    for(i=0;i<N;i++){
        cin >> c;
        if(c == '0'){
            b++;
        }else{
            arr[p] = b+1;
            p++;
            b =0;
        }
    }
    arr[1] = -1;

    if(N == 1){
        cout << 0;
    }else if(N == 2){
        cout << 1;
    }else {
        i = p-1;
        queda = M;
        while(i>=1){
            queda-= arr[i]; /// 0 9
            if(queda >= 0){
                ultimo = i;
                i--;
                pudo++;
            }else {
                if(pudo){
                    saltos++;
                    i = ultimo-1;
                    queda = M;
                    pudo = 0;
                } else {
                    cout << -1 << '\n';
                    return 0;
                }
            }
        }
        cout << saltos+1 << '\n';
    }
/// 2
/// 0 3
/// 4
/// 0 3 2 2


    return 0;
}