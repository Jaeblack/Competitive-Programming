#include <bits/stdc++.h>
using namespace std;
int N, a,b,ini,fin,med,resp,e,f,meno,maxo;
int arr[1005];




int main() {
	cin >> N;
	for(int i=1; i<=N;i++){
		cin >> arr[i];
	}

	cin >> a >> b;
	meno = min(a,b);
	maxo = max(a,b);
    for(int i=1; i<=N;i++){
		if (arr[i] >= meno && arr[i] <= maxo)resp++;
	}

	cout << resp;

	return 0;
}