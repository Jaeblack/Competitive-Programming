#include <bits/stdc++.h>

using namespace std;
int lado,i,j,k,l,m,vueltas;
char letra;
unsigned int numeros[1004][1004];
char caracteres[1004][1004];
char resultante[1004][1004];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>lado;
    i=0;
    while(i<lado){
        j=0;
        while(j<lado){
            cin>>numeros[i][j];
            j++;
        }
        i++;
    }
     i=0;
    while(i<lado){
        j=0;
        while(j<lado){
            cin>>caracteres[i][j];
            j++;
        }
        i++;
    }
    cin>>vueltas;
    while(vueltas>3){
        vueltas-=4;
    }
    if(vueltas==1){
        i=0;
        while(i<lado){
            j=0;
            while(j<lado){
                resultante[j][lado-1-i]=caracteres[i][j];
                j++;
            }
            i++;
        }
    }
    if(vueltas==2){
        i=0;
        while(i<lado){
            j=0;
            while(j<lado){
                resultante[lado-i-1][lado-j-1]=caracteres[i][j];
                j++;
            }
            i++;
        }
    }
    if(vueltas==3){
        i=0;
        while(i<lado){
            j=0;
            while(j<lado){
                resultante[lado-j-1][i]=caracteres[i][j];
                j++;
            }
            i++;
        }
    }

    if(vueltas==0){
        i=0;
        while(i<lado){
            j=0;
            while(j<lado){
                if(caracteres[i][j]=='X'){
                    cout<<numeros[i][j]<<" ";
                }
                j++;
            }
            i++;
        }
    } else {
        i=0;
        while(i<lado){
            j=0;
            while(j<lado){
                if(resultante[i][j]=='X'){
                    cout<<numeros[i][j]<<" ";
                }
                j++;
            }
            i++;
        }
    }
    return 0;
}