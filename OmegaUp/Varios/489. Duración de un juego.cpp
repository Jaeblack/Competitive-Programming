#include <bits/stdc++.h>

using namespace std;
long long int a,b,c,d,r;
int N;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> a >> b;
    if(a < b){
        cout << (b-a);
    } else {
        cout << (b+(24-a));
    }
    return 0;
}