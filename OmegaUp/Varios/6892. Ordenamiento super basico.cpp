#include <bits/stdc++.h>

using namespace std;
vector<long long int> num;
int N;
int main()
{
    cin >> N;
    num.resize(N+2);
    for(int i=0;i<N;i++){
        cin >> num[i];
    }
    sort(num.begin(),num.begin()+N);
    for(int i=0;i<N;i++){
        cout << num[i] << " ";
    }
    return 0;
}