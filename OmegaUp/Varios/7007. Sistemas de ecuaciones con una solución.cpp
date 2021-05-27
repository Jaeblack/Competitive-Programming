#include <bits/stdc++.h>

using namespace std;

double A1,B1,C1,A2,B2,C2,X,Y;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
    X = ((C1*B2)-(C2*B1))/((A1*B2)-(A2*B1));
    Y = (C1-(A1*X))/B1;
    cout << X << " " << Y << '\n';
    return 0;
}