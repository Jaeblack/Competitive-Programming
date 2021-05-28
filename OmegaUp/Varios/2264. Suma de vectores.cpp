#include <bits/stdc++.h>

using namespace std;

long long int arr[104],i,N,x;





int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    for(i=0;i<N;i++){
        cin >> arr[i];
    }
    for(i=0;i<N;i++){
        cin >> x;
        arr[i]+=x;
    }
    for(i=0;i<N;i++){
        cout << arr[i] << " ";
    }

    return 0;
}