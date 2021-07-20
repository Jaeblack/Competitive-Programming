#include <bits/stdc++.h>

using namespace std;
struct Rodillo{
    int x,y,radio,checado;
};
Rodillo rodillos[1083],actual;
int i,k,cuantos,dist_puntos,dist_radios,hechos=1;
int puntea(Rodillo uno,Rodillo dos){
    return ((dos.x - uno.x)*(dos.x - uno.x))+((dos.y - uno.y)*(dos.y - uno.y));
}
int radea(Rodillo uno,Rodillo dos){
    return (uno.radio+dos.radio)*(uno.radio+dos.radio);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>cuantos;
    for(i=0;i<cuantos;i++){
        cin >> rodillos[i].x>> rodillos[i].y>> rodillos[i].radio;
        if(rodillos[i].x == 0 && rodillos[i].y == 0){
            rodillos[i].checado=2;
            actual= rodillos[i];
        }
    }

        for(k=0;k<cuantos;k++){
            if(rodillos[k].checado == 0){
                dist_puntos=puntea(actual,rodillos[k]);
                dist_radios=radea(actual,rodillos[k]);
                if(dist_puntos == dist_radios){
                    rodillos[k].checado = 2;
                    actual=rodillos[k];
                    k=(-1);
                    hechos++;
                }
            }
        }


    cout<< actual.x <<" "<< actual.y <<endl;
    return 0;
}