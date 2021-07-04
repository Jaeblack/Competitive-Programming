#include <bits/stdc++.h>

using namespace std;
long long int a,b,c,d,r;
int N;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> a;
    if(((a)&(-a)) == 1){
        cout << "impar";
    } else {
        cout << "par";
    }
    return 0;
}