#include <iostream>
using namespace std;

int resp;
int N,x,i,K;

int main() {
	cin >> N >> K;
	for (i=0;i<N;i++){
		cin >> x;
		if ( x== K) resp++;
	}
	cout << resp;
	return 0;
}