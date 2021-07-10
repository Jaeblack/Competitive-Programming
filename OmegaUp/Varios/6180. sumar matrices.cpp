#include <bits/stdc++.h>

using namespace std;
long long int a,b,c,r;
vector<vector<long long int> > arr;
int N;
int main()
{

    cin >> N;
    arr.resize(N+2,vector<long long int>(N+2));
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cin >> a;
            arr[i][j] += a;
        }
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}