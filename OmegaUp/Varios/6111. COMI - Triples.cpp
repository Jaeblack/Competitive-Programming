#include <bits/stdc++.h>

using namespace std;
unsigned long long int a,b,c,d,r,pos;
vector<int> posis(50009);
int N;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    for(int i=1;i<=N;i++){
        cin >> a;
        if(a%3 == 0){
            posis[pos++] = i;
        }
    }
    if(pos > 0){
        cout << pos << '\n';
        for(int i=0;i<pos;i++){
            cout << posis[i]<< " ";
        }
    } else {
        cout << "No hay triples" << '\n';
    }
    return 0;
}