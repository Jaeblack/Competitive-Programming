#include <bits/stdc++.h>

using namespace std;
int filas,columnas,i,j,vueltas,v=0,h=0,n;
char letra;
int rectangulo[1005][1005];
int rectangulo1[1005][1005];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>filas>>columnas;
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            cin>>rectangulo[i][j];
        }
    }
    cin>>vueltas;
    for(i=0;i<vueltas;i++){
        cin>>letra;
        if(letra=='V') v++;
        if(letra=='H') h++;
    }
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            if (v%2==0){
                if(h%2==0){
                    rectangulo1[i][j]=rectangulo[i][j];
                } else {
                    rectangulo1[i][columnas-j-1]=rectangulo[i][j];
                }
            } else {
                if(h%2==0){
                    rectangulo1[filas-i-1][j]=rectangulo[i][j];
                } else {
                    rectangulo1[filas-i-1][columnas-j-1]=rectangulo[i][j];
                }
            }
        }
    }
    for(i=0;i<filas;i++){
        for(j=0;j<columnas;j++){
            cout<<rectangulo1[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}