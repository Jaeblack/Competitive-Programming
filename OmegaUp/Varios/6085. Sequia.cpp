#include <bits/stdc++.h>

using namespace std;
long long int a,b,c,d,r;
map<long long int,long long int>  arr;
int N;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> a >> b;
    for(int i=1;i<=a;i++){
        cin >> c;
        if(b <= 0){
            cout << (i-1);
            return 0;
        } else{
            b-= c;
            if(b <= 0){
                cout << (i);
                return 0;
            }
        }
    }
    return 0;
}