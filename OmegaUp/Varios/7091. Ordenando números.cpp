#include <bits/stdc++.h>

using namespace std;
long long int num[5];
int main()
{
    for(int i=1;i<=4;i++){
        cin >> num[i];
    }
    sort(num+1,num+5);
    for(int i=1;i<=4;i++){
        cout << num[i] << " ";
    }
    return 0;
}