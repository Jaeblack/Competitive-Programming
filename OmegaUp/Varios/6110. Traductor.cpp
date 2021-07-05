#include <bits/stdc++.h>

using namespace std;
long long int a,b,c,d,r;
map<long long int,long long int>  arr;
int N;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> a >> b;
    for(int i=0;i<a;i++){
        cin >> c >> d;
        arr[c] = d;
    }
    for(int i=0;i<b;i++){
        cin >> c;
        if(arr.find(c) == arr.end()){
            cout << "C?" << '\n';
        } else {
            cout << arr[c] << '\n';
        }
    }
    return 0;
}