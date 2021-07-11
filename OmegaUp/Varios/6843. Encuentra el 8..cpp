#include <bits/stdc++.h>

using namespace std;
long long int num,si;
int N;
int main()
{
    cin >> N;

    for(int i=0;i<N;i++){
        cin >> num;
        if(num == 8){
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}