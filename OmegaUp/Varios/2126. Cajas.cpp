#include <iostream>

using namespace std;
int cuantas,tam,i,sum=0;
bool tamanios[100004];
int main()
{
    cin>>cuantas;
    for(i=1;i<=cuantas;i++){
        cin>>tam;
        if(tamanios[tam]==false) {
           tamanios[tam]=true;
           sum++;
        }
    }
    cout << sum << endl;
    return 0;
}