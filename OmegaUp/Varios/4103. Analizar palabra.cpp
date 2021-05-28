#include <bits/stdc++.h>

using namespace std;

long long int v,i;
string pala,ala="";




int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> pala;
    long long int tama = pala.size();
    for(i=tama-1;i>=0;i--){
        ala+=pala[i];
        if(pala[i] == 'a') v++;
        if(pala[i] == 'e') v++;
        if(pala[i] == 'i')v++;
        if(pala[i] == 'o')v++;
        if(pala[i] == 'u')v++;
        if(pala[i] == 'A')v++;
        if(pala[i] == 'E')v++;
        if(pala[i] == 'I')v++;
        if(pala[i] == 'O')v++;
        if(pala[i] == 'U')v++;
    }
    cout << tama << '\n' << v << '\n' << ala<< '\n';
    return 0;
}