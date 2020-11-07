#include <bits/stdc++.h>

#define LIMITE 100000
using namespace std;
vector<int> factos;

int N, F=1,resp=0,cont=2,elotro;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N ;
    while(F<=N){
        factos.push_back(F);
        F*=cont;
        cont++;
    }
    cont= factos.size()-1;
    while(N>0){
        elotro = factos[cont];
        if(N- elotro>= 0){
            N-= elotro;
            resp++;
        }else {
            cont--;
        }

    }
    cout << resp;
    return 0;
}
