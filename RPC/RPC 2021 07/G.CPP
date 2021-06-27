#include <bits/stdc++.h>

using namespace std;

int ranking[105];
int lugarde[105];
string teami, teamj;
int timy, tejota;
int teams, matches;

int toint(string estring){
    int tamanio = estring.size();
    char izard[tamanio-1];
    for(int i =0; i<tamanio-1; i++){
        izard[i] = estring[i+1];
    }
    return atoi(izard);
}
void inicial(){
    for(int i=0; i<=101; i++){
        lugarde[i] = ranking[i] = i;
    }
}
void procesa(int winner, int loser){
    int posLos = lugarde[loser];
    int posWin = lugarde[winner];
    if(posLos < posWin){ ///
        for(int i=posLos; i< posWin; i++){
            ranking[i] = ranking[i+1];
        }
        ranking[posWin] = loser;
        for(int i=1; i<=teams; i++){
            lugarde[ranking[i] ] = i;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    inicial();
    cin>> teams >> matches;
    /*
    for(int i=1; i<=teams; i++){
        cout << ranking[i] << " ";
    }
    cout <<'\n';
    */
    for(int i=0; i< matches; i++){
        cin >> teami >> teamj;
        timy = toint(teami);
        tejota = toint(teamj);
        procesa(timy, tejota);
        /*
        for(int i=1; i<=teams; i++){
            cout << ranking[i] << " ";
        }
        cout <<'\n';
        */
    }
    for(int i=1; i<teams; i++){
        cout << "T" << ranking[i] << " ";
    }
    cout << "T" << ranking[teams];
    cout <<'\n';

    return 0;
}
