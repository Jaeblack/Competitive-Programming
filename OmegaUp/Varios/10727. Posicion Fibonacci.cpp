#include <bits/stdc++.h>
using namespace std;

unsigned long long int N,ini,fin,uno=1,dos,i;
unsigned long long int fibo[100];
int posi = -1;

int main() {
    fibo[1] = fibo[2] = 1;
    for(i=3; i<=93; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    cin >> N;
    for(i=1; i<=93; i++){
        if(N == fibo[i]){
            posi = i;
            break;
        }
    }
    cout << posi;




	return 0;
}