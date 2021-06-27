#include <bits/stdc++.h>

using namespace std;
long long int a,b,c,d,r;

int N;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> a >> b >> c;
    if(a+b == c){
        cout << "+";
    }else if( a-b == c){
        cout << "-";
    }else if( a*b == c){
        cout << "*";
    }else if( a/b == c){
        cout << "/";
    }else {
        cout << "D:";
    }

    return 0;
}