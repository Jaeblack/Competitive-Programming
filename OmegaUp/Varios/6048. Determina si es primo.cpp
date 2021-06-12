#include <bits/stdc++.h>

using namespace std;
long long int N,M,i;
bool nuez = true;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    if(N ==1 || N == 2 || N == 3 || N==5 || N == 7 || N ==11){

    }else{
        for(i=2;i<=(N/2)+1;i++){
            if(N%i == 0){
                nuez = false;
                break;
            }
        }
    }

    if(nuez){
        cout << "SI";
    } else {
        cout << "NO";
    }
    return 0;
}