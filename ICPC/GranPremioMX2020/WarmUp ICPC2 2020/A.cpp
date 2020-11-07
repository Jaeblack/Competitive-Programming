#include <bits/stdc++.h>

using namespace std;
int C, A,resp;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> C >> A;
    C--;
    if(A%C == 0){
        resp = A/C;
    } else {
        resp = (A/C) +1;
    }
    cout << resp;
    return 0;
}
