#include <iostream>

using namespace std;
int linea[100005],arreglo[100005],fichas,i,j,n,cosa,mayor;
int main()
{
    cin>>n;
    for(i=2;i<=n+1;i++){
        cin>>cosa;
        arreglo[i]=cosa;
        if(cosa==0){
            linea[i]++;
            linea[i]+=fichas;
            if(arreglo[i-1-fichas]==0)linea[i-1-fichas]+=fichas;
            fichas=0;
        }
        if(cosa==1){
            linea[i]+=fichas;
            if(arreglo[i-1-fichas]==0)linea[i-1-fichas]+=fichas;
            fichas=0;
        }
        if(cosa==2)fichas++;
    }
     if(arreglo[i-1-fichas]==0)linea[i-1-fichas]+=fichas;
     mayor=fichas;
     for(i=2;i<=n+1;i++){
        if(linea[i]>mayor) mayor=linea[i];
     }
     cout<<mayor<<endl;

    return 0;
}