#include <bits/stdc++.h>

using namespace std;
int pasos,carretes,i;
char Final;
int suma(int ini,int fin){
    int pas=0;
    int ini2=ini;
    while(ini!= fin && ini2!=fin){
        if(ini==9){
            ini=0;
        }else{
            ini++;
        }
        if(ini2==0){
            ini2=9;
        }else{
            ini2--;
        }
        pas++;
    }
    return pas;
}
int main()
{
    cin>>carretes;
    char inicio[carretes+3];
    for(i=0;i<carretes;i++){
        cin>>inicio[i];
    }
    for(i=0;i<carretes;i++){
        cin>>Final;
        pasos+=suma(inicio[i]-48,Final-48);
    }
    cout<<pasos;
    return 0;
}