#include <bits/stdc++.h>

using namespace std;
long long int a,b,mcd;
long long int MCD(long long int mayor,long long int menor){
    if(mayor%menor==0){
        return menor;
    }
    return MCD(menor,mayor%menor);
}
long long int MCM(long long int uno,long long int dos){
    return ((uno*dos)/MCD(uno,dos));
}

long long int nu1,nu2,de1,de2,nu3,de3;
int main()
{
    cin>>nu1>>de1>>nu2>>de2;
    de3=MCM(de1,de2);
    nu3=(((de3/de1)*(nu1))+((de3/de2)*(nu2)));
    mcd=MCD(de3,nu3);
    de3/=mcd;
    nu3/=mcd;
    if(nu3>de3 && nu3%de3==0){
        cout<< (nu3/de3)<<endl;
    }else{
        cout<<nu3<<" "<<de3<<endl;
    }
    return 0;
}