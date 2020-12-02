#include <bits/stdc++.h>

using namespace std;

int large[200005];

string word,zaWorudo = "";
int N, N2, maxLarge=-1;


void manachering(){
    int left=1,right=1,current=0, currentLarge=0, mirror, center=1;
    for(current=1; current<N2; current++){
        if(current > right){
            currentLarge = 1;
        } else {
            mirror = left + (right - current);
            currentLarge = min(large[mirror], (right - current) );
        }
        while( ((current-currentLarge)>=0) && ((current+currentLarge)<=N2)){
            if(zaWorudo[current-currentLarge] == zaWorudo[current+currentLarge]){
                currentLarge++;
            }else{
                break;
            }
        }
        currentLarge--;
        large[current] = currentLarge;
        if(currentLarge > maxLarge){
            maxLarge = currentLarge;
        }
        if((current+currentLarge) > right ){
            center = current;
            left = center-currentLarge;
            right = center+currentLarge;
        }
    }

}
void imprime(){
    for(int i=0; i<=N2; i++){
        cout << zaWorudo[i] << " " ;
    }
    cout << '\n';
    for(int i=0; i<=N2; i++){
        cout << large[i] << " ";
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> N >> word;
    N2 = (N*2)+1;
    for(int i=0; i<N; i++){
        zaWorudo+= '#';
        zaWorudo+= word[i];
    }
    zaWorudo+='#';
    for(int i=1; i<N2; i+=2){
        large[i] = 1;
    }
    manachering();
    //imprime();
    cout << maxLarge << '\n';
    return 0;
}
