#include <bits/stdc++.h>

using namespace std;
 double x,y,z,resu,pi=3.141592;
int main()
{

    cin >> x >> y >> z;
    resu = (x+(x*(y+(z*z))))/((x+pi)*(y+pi));
    cout << resu << '\n';
    return 0;
}