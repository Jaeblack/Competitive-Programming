#include <bits/stdc++.h>

using namespace std;
int cuantas,atini,ataum,i,participantes=0,atraccion;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>cuantas>>atini>>ataum;
    int vacas[cuantas+3];
    i=0;
    while(i<cuantas){
        cin>>vacas[i];
        i++;
    }
    sort(vacas,vacas+cuantas);
    atraccion=atini;
    i=0;
    while(atraccion>=vacas[i] && i<cuantas){
        i++;
        participantes++;
        atraccion+=ataum;
    }
    cout<<participantes;
    return 0;
}