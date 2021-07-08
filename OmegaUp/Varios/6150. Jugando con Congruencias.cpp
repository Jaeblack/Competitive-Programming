#include <bits/stdc++.h>

using namespace std;
long long int a,b,c,d,r;
vector<long long int>  arr;
int N;
int main()
{

    cin >> a >> b >> N;
    c = a%b;
    for(int i=0;i<N;i++){
        cin >> d;
        if(d%b == c) r++;
    }

    cout << r;
    return 0;
}