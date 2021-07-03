#include <bits/stdc++.h>

using namespace std;
long long int a,b,c,d,r;
int N;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> a >> b;
    if(a < b){
        cout << 1 << " " << (b-a);
    } else if(a > b) {
        cout << 2 << " " << (a-b);
    } else {
        cout <<"Nivel Optimo";
    }
    return 0;
}