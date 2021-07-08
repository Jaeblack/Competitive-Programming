#include <bits/stdc++.h>

using namespace std;
long long int a,b,c,r;
vector<long long int>  arr;
int N;
int main()
{

    cin >> N;
    arr.resize(N+2);
    for(int i=0;i<N;i++){
        cin >> arr[i];

    }
    cin >> a;
    for(int i=0;i<N;i++){
        if(arr[i] == a) b++;
    }
    cout << b;
    return 0;
}