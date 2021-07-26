#include <bits/stdc++.h>

using namespace std;
int n,i=0,digitos[13],d;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n;
    while(i<n){
        cin>>d;
        digitos[d]++;
        i++;
    }
    i=0;
    while(i<10){
        while(digitos[i]>0){
            cout<<i<<" ";
            digitos[i]--;
        }
        i++;
    }
    return 0;
}