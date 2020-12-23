#include <bits/stdc++.h>

using namespace std;
int N,i,maxo,j,suma;
long long int nums[2009];
int arri[2009],aba[2009];
vector<vector<int  > > visitados;
int buscaSubiendo(int piso,int sig){
    if(sig == N+1){
        return 0;
    } else {
        if(visitados[piso][sig] == -1){
            int uno=0,dos=0,tres=0;
            uno = buscaSubiendo(piso,sig+1);
            if(nums[sig] > nums[piso]){
                dos = buscaSubiendo(sig,sig+1);
                dos+=1;
            }
            visitados[piso][sig] = max(uno,max(dos,tres));
        }
        return visitados[piso][sig];
    }
}
int buscaBajando(int tope,int sig){
    if(sig == N+1){
        return 0;
    } else {
        if(visitados[tope][sig] == -1){
            int uno=0,dos=0,tres=0;
            uno = buscaBajando(tope,sig+1);
            if(nums[sig] < nums[tope]){
                dos = buscaBajando(sig,sig+1);
                dos+=1;
            }
            visitados[tope][sig] = max(uno,max(dos,tres));
        }
        return visitados[tope][sig];
    }
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N;
    visitados.resize(N+2,(vector<int >(N+2,-1)));
    for(i=1;i<=N;i++){
        cin >> nums[i];
    }
    for(i=1;i<=N;i++){
        buscaSubiendo(i,i);
        arri[i] = 0;
        if(visitados[i][i] > arri[i]) arri[i] = visitados[i][i];
    }
    fill(visitados.begin(),visitados.end(),vector<int >(N+2,-1));
    for(i=1;i<=N;i++){
        buscaBajando(i,i);
        aba[i] = 0;
        if(visitados[i][i] > aba[i]) aba[i] = visitados[i][i];
    }
    maxo = 0;
    for(i=1;i<=N;i++){
        suma = arri[i] + aba[i];
        if(suma > maxo) maxo = suma;
    }
    maxo++;
    cout << maxo << '\n';
    return 0;
}