#include <bits/stdc++.h>

using namespace std;
long long int a;
int main()
{
    cin >> a;
    if(a<0 || a >14){
        cout << "Are you kidding me?";
    } else if(a<7){
        cout << "Acido";
    } else if(a>7){
        cout << "Base";
    } else {
        cout << "Neutro";
    }
    return 0;
}