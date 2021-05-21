#include <bits/stdc++.h>

using namespace std;
long long int a,b;
long long int mcd(long long int mayor,long long int menor){
    if(mayor%menor==0){
        return menor;
    }
    return mcd(menor,mayor%menor);
}
int main()
{
    cin>>a>>b;
    if (a>b) cout<<mcd(a,b)<<endl;
    if(a<b)cout<<mcd(b,a)<<endl;
    if(a==b)cout<<a<<endl;
    return 0;
}