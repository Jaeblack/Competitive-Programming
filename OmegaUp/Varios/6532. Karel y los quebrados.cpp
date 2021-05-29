#include <bits/stdc++.h>
using namespace std;

long long int k,x,y,i,K,den,num1,num2,num3,den2,aux=0;
long long int arr[2][1005];

int main() {
    cin >> k;
    K = k*2;
    for(i=k+1; i<=K; i++){
        x = i;
        y = k*x;
        num1 = y/k;
        num2 = y/x;
        num3 = num1-num2;
        if(y%num3 == 0){

            y/= num3;
            num3/= num3;
            if(num3 == 1){
                aux++;
                arr[0][aux] = x;
                arr[1][aux] = y;
            }
        }

    }

    cout << aux << '\n';
    for(i=1;i<=aux;i++){
        cout << "1/"<<k<<" = 1/"<<arr[1][i]<<" + 1/"<<arr[0][i]<<'\n';
    }

	return 0;
}